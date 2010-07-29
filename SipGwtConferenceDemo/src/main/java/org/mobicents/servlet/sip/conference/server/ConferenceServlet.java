/*
 * This is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this software; if not, write to the Free
 * Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA, or see the FSF site: http://www.fsf.org.
 */
package org.mobicents.servlet.sip.conference.server;

import java.io.IOException;
import java.net.IDN;
import java.util.HashMap;
import java.util.Properties;

import javax.servlet.ServletConfig;
import javax.servlet.ServletException;
import javax.servlet.sip.SipServlet;
import javax.servlet.sip.SipServletRequest;
import javax.servlet.sip.SipServletResponse;
import javax.servlet.sip.SipURI;
import javax.servlet.sip.Address;
import javax.servlet.sip.SipFactory;
import javax.servlet.sip.SipApplicationSession;

import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.mobicents.mscontrol.MsConnection;
import org.mobicents.mscontrol.MsProvider;
import org.mobicents.mscontrol.MsSession;
import org.mobicents.servlet.sip.conference.server.media.ConferenceCenter;
//15072010
import org.mobicents.servlet.sip.conference.server.eNodeB;
import org.mobicents.servlet.sip.conference.server.Participant;
import org.mobicents.servlet.sip.conference.server.user4GConference;
import org.mobicents.servlet.sip.conference.server.overlayPeer;

/*
 * This example shows a simple User agent that can playback audio.
 * @author Vladimir Ralev
 *
 */
@javax.servlet.sip.annotation.SipServlet
public class ConferenceServlet extends SipServlet {
	private static Log logger = LogFactory.getLog(ConferenceServlet.class);
	private static final long serialVersionUID = 1L;
	public static final String PR_JNDI_NAME = "media/trunk/PacketRelay/$";
	private static final String CONTACT_HEADER = "Contact";
	//15072010
	private int userID = 0; 
	private int nbrUser = 0;
	private user4GConference conference = new user4GConference(); 
	public eNodeB en1 = new eNodeB();
	
	//19072010
	public eNodeB en[] = new eNodeB[10];
	
	private SipFactory _sipFactory = null;

    @Override 
    public void init(ServletConfig servletConfig) throws ServletException {
    	
    	super.init(servletConfig); 
    	logger.info("SIP Servlet AS has been started"); 
    	for (int i = 0; i < 10; i++) {
            en[i] = new eNodeB();
		}
		en[0].seteNodeB(1,"sip:enodeB1@open-ims.test","157.159.16.76","5080");
		en[1].seteNodeB(2,"sip:enodeB2@open-ims.test","157.159.16.91","7080");
    	logger.info("Init eNode");
    	
    	_sipFactory = (SipFactory) getServletContext().getAttribute( SipServlet.SIP_FACTORY);
    	
    	
    }
	
	
	/**
	 * {@inheritDoc}
	 */
	@Override
	protected void doSubscribe(SipServletRequest req) throws ServletException,
			IOException {
		logger.info("Process SUBSCRIBE MESSAGE ");
		logger.info("Got :  " + req.toString());
		SipServletResponse res = req.createResponse(200); 
		res.addHeader("Expires", "300");
		//("Expires", 7200);	
		res.send(); 
				//SC_OK).send();		
	}

	
	/**
	 * {@inheritDoc}
	 */
	@Override
	protected void doMessage(SipServletRequest req) throws ServletException,
			IOException {
		req.createResponse(SipServletResponse.SC_OK).send();	
		logger.info("Process MESSAGE MESSAGE ");
		logger.info("Got :  " + req.toString());
		
		int idenodeB = -1;
		int stt = 0; //number id user  
		//28072010 Xac dinh User
		logger.info("???????Xac dinh User");
		String fromUser = req.getFrom().getURI().toString(); 
		logger.info("???????"+fromUser);
		//Xac dinh eNodeB ung voi User
		for (int i=1;i<conference.nbrParticipant+1; i++){
			if (fromUser.contains(conference.userURI[i])){
				logger.info("************ Tim duoc User:"+fromUser + "== " + conference.userURI[i]);				
				idenodeB = conference.idEnodeB[i];
				stt = i; 
			}			
		}
		if (idenodeB == -1) {
			idenodeB = 0; 	
		}
		String username = ((SipURI) req.getFrom().getURI()).getUser();
		logger.info("User: "+ username);

		
		
		logger.info("Tao ban tin MESSAGE PAUSE/RETURN/HEARTBIT: ");
		String toAddress= en[idenodeB].ipeNodeB; 
		String toPort = en[idenodeB].eNodeB_Port;
		String fromAddress = req.getRemoteAddr();

		SipURI to = _sipFactory.createSipURI("singlehost"+idenodeB, toAddress); 
		SipURI from = _sipFactory.createSipURI(username, fromAddress); 
		logger.info("Debug doMESSAGE : ");
		SipApplicationSession sas = req.getApplicationSession(); 
		logger.info("Debug doMESSAGE : ");
		sas.setAttribute("TO_ADDRESS", toAddress); 
		sas.setAttribute("TO_PORT", toPort);
		
		logger.info("Debug doMESSAGE : ");
		logger.info("Sip Application Session : "+ sas.toString()); 
		
		//22072010
		SipServletRequest message_overlay = _sipFactory.createRequest(sas, "MESSAGE", from, to);
		//SipServletRequest message_overlay = _sipFactory.createRequest(sas, "OPTIONS", from, to);
		SipURI requestUri = (SipURI) _sipFactory.createURI("sip:singlehost"+idenodeB+"@"+en[idenodeB].ipeNodeB +":"+en[idenodeB].eNodeB_Port);
		message_overlay.setRequestURI(requestUri);
		String conMessage = "Test";
		 
		
		Object sdpObj = req.getContent();
		String sdp = null; 
		sdp = sdpObj.toString();
		String [] temp1 = null; 
		temp1 = sdp.split("\n");
		if (temp1[0].contains("PAUSE")){
				logger.info("Receive message : PAUSE");
				logger.info("Send Overlay message : PAUSE");
				conMessage = "PAUSE\tIP:"+fromAddress;
				
				//23072010 - Change status user 
				logger.info("**************Xac dinh User");			 
				logger.info("**************"+fromUser);
						logger.info("************ Tim duoc User:"+fromUser);
						logger.info("************ Chuyen trang thai user :");
						for (int j=1; j<en[idenodeB].nbrParticipant+1; j++){
							if (en[idenodeB].user[j].userURI.equals(fromUser)) {
								logger.info("************ Chuyen trang thai user:"+en[idenodeB].user[j].userURI +" tu :"+ en[idenodeB].user[j].status);
								en[idenodeB].user[j].status = 1; //PAUSE 
								logger.info("************ Thanh trang thai user "+ en[idenodeB].user[j].userURI +" co :"+ en[idenodeB].user[j].status);
							}
						}			
		}
		if (temp1[0].contains("RETURN")){
				logger.info("Receive message : RETURN");
				logger.info("Send Overlay message : RETURN");
				conMessage = "RETURN\tIP:"+fromAddress;
				
				//23072010 - Change status user 
				logger.info("!!!!!!!!!!!!!!Xac dinh User");
				logger.info("!!!!!!!!!!!!!!"+fromUser);
				logger.info("!!!!!!!!!!!! Tim duoc User:"+fromUser );
				logger.info("!!!!!!!!!!!! Chuyen trang thai user :");
					for (int j=1; j<en[idenodeB].nbrParticipant+1; j++){
						if (en[idenodeB].user[j].userURI.equals(fromUser)) {
							logger.info("!!!!!!!!!!!! Chuyen trang thai user:"+en[idenodeB].user[j].userURI +" tu :"+ en[idenodeB].user[j].status);
							en[idenodeB].user[j].status = 0; //RETURN 
							logger.info("!!!!!!!!!!!! Thanh trang thai user "+ en[idenodeB].user[j].userURI +" co :"+ en[idenodeB].user[j].status);
						}
					}			
		}
        

		//22072010		
		if (temp1[0].contains("HANDOVER")){
			logger.info("==============Receive message : HANDOVER");
			logger.info("==============Send Overlay message : HEARTBIT");
			logger.info("==============Xac dinh User");
			//String fromUser = req.getFrom().getURI().toString(); 
			logger.info("=============="+fromUser);
			//for (int i=1;i<conference.nbrParticipant+1; i++){
				//if (fromUser.contains(conference.userURI[i])){
					logger.info("============== Tim duoc User:"+fromUser + "==");
					logger.info("============== Chuyen User tu "+en[idenodeB].eNodeBURI +"sang new enodeB ");
					
					//int oldEnodeB = conference.idEnodeB[i];
					int oldEnodeB = idenodeB;
					int newEnodeB = -1;
					if (oldEnodeB==0){
						newEnodeB = 1; 
					} else {
						newEnodeB = 0;
					}
					logger.info("==============OldenodeB: "+oldEnodeB);
					logger.info("==============NewenodeB: "+newEnodeB);
					Participant par = new Participant(); 
					//par.setParticipant(i, fromUser, 0 , 0);
					par.setParticipant(stt, fromUser, 0 , 0);
					en[newEnodeB].addParticipanteNodeB(par); 
					//conference.idEnodeB[i]=newEnodeB;
					conference.idEnodeB[stt]=newEnodeB;
					//Create SIP message to send old enodeB : HANDOVER_SUBSCRIBE  
					logger.info("Tao ban tin MESSAGE JOIN: ");
					String toAddressold= en[oldEnodeB].ipeNodeB; 
					String toPortold = en[oldEnodeB].eNodeB_Port; 
					fromAddress = req.getRemoteAddr();
					logger.info("IP:"+en[oldEnodeB].ipeNodeB + "\nPort:" + en[oldEnodeB].eNodeB_Port);
					
					to = _sipFactory.createSipURI("singlehost"+oldEnodeB+1, toAddressold); 
					from = _sipFactory.createSipURI(username, fromAddress); 
					sas.setAttribute("TO_ADDRESS", toAddressold); 
					sas.setAttribute("TO_PORT", toPortold);
					
					logger.info("Debug 3  MESSAGE : ");
					logger.info("Sip Application Session : "+ sas.toString()); 
					
					
					message_overlay = _sipFactory.createRequest(sas, "MESSAGE", from, to);
					//28072010
					conMessage = "HANDOVER_SUBCRIBE\t"+ fromUser; 
					String teststring = "sip:singlehost"+oldEnodeB+"@"+en[oldEnodeB].ipeNodeB +":"+en[oldEnodeB].eNodeB_Port; 
					logger.info("============== "+ teststring );
					requestUri = (SipURI) _sipFactory.createURI("sip:singlehost"+oldEnodeB+"@"+en[oldEnodeB].ipeNodeB +":"+en[oldEnodeB].eNodeB_Port);
					message_overlay.setRequestURI(requestUri);
					message_overlay.setContent(conMessage, "text/plain");
					message_overlay.send();
					
					
					logger.info("============== User thuoc enodeB moi : "+en[conference.idEnodeB[stt]].eNodeBURI);
					logger.info("============== Xoa user enodeB cu "+en[oldEnodeB].eNodeBURI);
					//en[oldEnodeB].deleteParticipantenodeB(par);
					for (int j=1; j<en[oldEnodeB].nbrParticipant+1; j++){
						if (en[oldEnodeB].user[j].userURI.equals(fromUser)) {
							en[oldEnodeB].deleteParticipantenodeB(en[oldEnodeB].user[j]);							
						}
					}			
					
					logger.info("List of participants in conference");
					for (int k = 1; k < nbrUser+1; k++){
						
						logger.info("User " + conference.userURI[k]+" in enode B "+ en[conference.idEnodeB[k]].eNodeBURI);
					}
					logger.info("============== Test1 ");
					
					String toAddressnew= en[newEnodeB].ipeNodeB; 
					String toPortnew = en[newEnodeB].eNodeB_Port; 
					//fromAddress = req.getRemoteAddr();

					to = _sipFactory.createSipURI("singlehost"+newEnodeB+1, toAddressnew); 
					from = _sipFactory.createSipURI(username, fromAddress); 
					sas.setAttribute("TO_ADDRESS", toAddressnew); 
					sas.setAttribute("TO_PORT", toPortnew);
					
					logger.info("Debug 3  MESSAGE : ");
					logger.info("Sip Application Session : "+ sas.toString()); 
					
					
					message_overlay = _sipFactory.createRequest(sas, "MESSAGE", from, to);
					//28072010
					conMessage = "HANDOVER_NOTIFY\t"+ fromUser; 
					requestUri = (SipURI) _sipFactory.createURI("sip:singlehost"+newEnodeB+"@"+en[newEnodeB].ipeNodeB +":"+en[newEnodeB].eNodeB_Port);
					message_overlay.setRequestURI(requestUri);
				//}
			//}
			conMessage = conMessage+ "\tFinish HANDOVER";
			logger.info("==============Finish HANDOVER ");
		}
		
		if (temp1[0].contains("QUERY")){
			logger.info("QUERY--------------Xac dinh User");
			//fromUser = req.getFrom().getURI().toString();
			String portSource =   Integer.toString(((SipURI) req.getFrom().getURI()).getPort());
			String ipSource = req.getRemoteAddr(); 
			String portDest = Integer.toString(((SipURI) req.getTo().getURI()).getPort());
			String ipDest = req.getLocalAddr(); 
			//idenodeB = Integer.parseInt(temp1[1].trim());
			for (int i=0;i<2;i++ ){
				if ((ipSource.contains(en[i].ipeNodeB))&&(portSource.contains(en[i].eNodeB_Port))){
					idenodeB = i; 
				}
			}

			
			to = _sipFactory.createSipURI("singlehost", ipSource); 
			from = _sipFactory.createSipURI("AS", ipDest); 
			//logger.info("Debug doMESSAGE : ");
			sas = req.getApplicationSession(); 
			//logger.info("Debug doMESSAGE : ");
			sas.setAttribute("TO_ADDRESS", ipSource); 
			sas.setAttribute("TO_PORT", portDest);
			logger.info("Debug doMESSAGE : ");
			logger.info("Sip Application Session : "+ sas.toString()); 
			
			//29072010
			message_overlay = _sipFactory.createRequest(sas, "MESSAGE", from, to);
			requestUri = (SipURI) _sipFactory.createURI("sip:singlehost@"+ipSource+":"+portSource);
			message_overlay.setRequestURI(requestUri);
			//conMessage = "Test";
			
			
			
			
			logger.info("Receive message : QUERY"); 
			logger.info("Send Overlay message: KEEPALIVE"); 
			conMessage = "KEEP_ALIVE\t";
			for (int i=0; i<en[idenodeB].nbrParticipant;i++){
				conMessage = conMessage+"ideNodeB="+en[0].ID+ 
					             "\tid="+i+1+
					             "\turi="+en[0].user[i+1].userURI+
					             "\trole="+en[0].user[0].role+
					             "\tstatus="+en[0].user[0].status;  
				}			
		}
			        	
		message_overlay.setContent(conMessage, "text/plain");
		message_overlay.send();
			
	}

	
	/**
	 * {@inheritDoc}
	 */
	@Override
	protected void doOptions(SipServletRequest req) throws ServletException,
			IOException {
		logger.info("Process OPTIONS MESSAGE ");
		logger.info("Got :  " + req.toString());
		req.createResponse(SipServletResponse.SC_OK).send();		
	}
	
	/**
	 * {@inheritDoc}
	 */	
	@Override
	protected void doNotify(SipServletRequest req) throws ServletException,
	IOException {
	logger.info("Override Process NOTIFY MESSAGE ");
	logger.info("Got :  " + req.toString());
	req.createResponse(SipServletResponse.SC_OK).send();		
	}
	/**
	 * {@inheritDoc}
	 */	
	@Override
	protected void doInfo(SipServletRequest req) throws ServletException,
	IOException {
	logger.info("Override Process INFO MESSAGE ");
	logger.info("Got :  " + req.toString());
	req.createResponse(SipServletResponse.SC_OK).send();		
	}

	
	
	/**
	 * {@inheritDoc}
	 */
	@Override
	protected void doRegister(SipServletRequest req) throws ServletException,
	IOException {
		logger.info("Received register request: " + req.getTo());
		int response = SipServletResponse.SC_OK;
		SipServletResponse resp = req.createResponse(response);
		HashMap<String, String> users = (HashMap<String, String>) getServletContext().getAttribute("registeredUsersMap");
		if(users == null) users = new HashMap<String, String>();
		getServletContext().setAttribute("registeredUsersMap", users);
		Address address = req.getAddressHeader(CONTACT_HEADER);
		//String fromURI = req.getFrom().getURI().toString();
		String fromURI = req.getTo().getURI().toString();
		String username = ((SipURI) req.getFrom().getURI()).getUser();
		logger.info("User: "+ username);
		//15072010
		// Fix enode B
		int expires = address.getExpires();
		if(expires < 0) {
			expires = req.getExpires(); 			
		}
		if(expires == 0) {
			users.remove(fromURI);
			logger.info("User " + fromURI + " unregistered");
			
			logger.info("Conference: Got DeREGISTER request:\n" + req);
			SipURI from = (SipURI) req.getFrom().getURI();
			SipURI to = (SipURI) req.getTo().getURI();
		} else {
			resp.setAddressHeader(CONTACT_HEADER, address);
			users.put(fromURI, address.getURI().toString());			
			//15072010 
			//eNodeB manages user participant
			logger.info("Test 1 - eNodeB manages user participant");			
			nbrUser++;						
			Participant par = new Participant();
			userID++;
			par.setParticipant(userID, fromURI, 0 , 0);
			//en1.addParticipanteNodeB(par);
			if ((nbrUser==1)||(nbrUser==2)) {
				en[0].addParticipanteNodeB(par);
				conference.setuser4GConference(fromURI, 0);
			}
			if ((nbrUser==3)||(nbrUser==4)) {
				en[1].addParticipanteNodeB(par);
				conference.setuser4GConference(fromURI, 1);
			}
			//logger.info("Test 1 - enodeB1 has "+ en1.nbrParticipant+" participants");
			logger.info("Test 1 - enodeB :" + en[0].eNodeBURI + "has "+ en[0].nbrParticipant+" participants");
			for (int i = 0; i < en[0].nbrParticipant; i++) {
				//logger.info("Test 1 - User["+i+"]="+en1.user[i+1].userURI);
				logger.info("Test 1 - User["+i+"]="+en[0].user[i+1].userURI);
			}
			
			logger.info("Test 1 - enodeB :" + en[1].eNodeBURI + "has "+ en[1].nbrParticipant+" participants");
			for (int i = 0; i < en[1].nbrParticipant; i++) {
				//logger.info("Test 1 - User["+i+"]="+en1.user[i+1].userURI);
				logger.info("Test 1 - User["+i+"]="+en[1].user[i+1].userURI);
			}
			
			
			
			logger.info("Test 2 - AS manages users 4G");			
			//AS manages user participant correspondent eNodeB 1
			logger.info("Test 2 - Conference has " + conference.nbrParticipant + " participants");
			for (int i = 0; i < conference.nbrParticipant; i++) {
				logger.info("Test 2 - User " + conference.userURI[i+1] + "--- enodeB:"+ en[conference.idEnodeB[i+1]].eNodeBURI);
			}
			
			logger.info("User " + fromURI + 
					" registered with an Expire time of " + expires);
		}				
						
		resp.send();
	
	}

	
	/**
	 * {@inheritDoc}
	 */
	protected void doInvite(SipServletRequest request) throws ServletException,
			IOException {

		logger.info("MediaPlaybackServlet: Got request:\n"
				+ request.getMethod());
		SipServletResponse sipServletResponse = request.createResponse(SipServletResponse.SC_RINGING);
		sipServletResponse.send();
		Object sdpObj = request.getContent();
		byte[] sdpBytes = (byte[]) sdpObj;
		String sdp = new String(sdpBytes); 
		try {
			MsProvider provider = ConferenceCenter.getInstance().getProvider();
			MsSession session = provider.createSession();
			MsConnection connection = session.createNetworkConnection(PR_JNDI_NAME);
			ConferenceConnectionListener listener = new ConferenceConnectionListener(request);
			connection.addConnectionListener(listener);
			//logger.info("SDP1 : "+ sdp);
			connection.modify("$", sdp);
			//logger.info("SDP2 : "+ sdp);

		} catch (Exception e) {
			e.printStackTrace();
		}
		
		//28072010
		int idenodeB = -1;
		String username = ((SipURI) request.getFrom().getURI()).getUser();
		logger.info("User: "+ username);

		//28072010 Xac dinh User 
		logger.info("???????Xac dinh User");
		String fromUser = request.getFrom().getURI().toString(); 
		
		
		logger.info("???????"+fromUser);
		//Xac dinh eNodeB ung voi User
		for (int i=1;i<conference.nbrParticipant+1; i++){
			logger.info("????? User:" + conference.userURI[i]);
			if (fromUser.contains(conference.userURI[i])){
				logger.info("************ Tim duoc User:"+fromUser + "== " + conference.userURI[i]);				
				idenodeB = conference.idEnodeB[i];
			}			
		}
		logger.info("????? inodeB:" + idenodeB);
		if (idenodeB == -1){
			idenodeB = 0; 
		}
		//idenodeB = 0;
		//SipServletRequest req; //Request for Overlay network 
		logger.info("Tao ban tin MESSAGE JOIN: ");
		String toAddress= en[idenodeB].ipeNodeB; 
		String toPort = en[idenodeB].eNodeB_Port; 

		
		//String fromAddress= "157.159.16.91";
		//String fromPort ="5080";
		//String fromAddress = request.getAddressHeader("From").toString();
		String fromAddress = request.getRemoteAddr();

		//SipURI to = _sipFactory.createSipURI("singlehost", toAddress); 
		//SipURI from = _sipFactory.createSipURI("enodeB1", fromAddress); 
		SipURI to = _sipFactory.createSipURI("singlehost"+idenodeB, toAddress); 
		SipURI from = _sipFactory.createSipURI(username, fromAddress); 
		logger.info("Debug 1  MESSAGE : ");
		SipApplicationSession sas = request.getApplicationSession(); 
		logger.info("Debug 2  MESSAGE : ");
		//sas.setAttribute("FROM_ADDRESS", fromAddress); 
		//sas.setAttribute("FROM_PORT", fromPort);
		sas.setAttribute("TO_ADDRESS", toAddress); 
		sas.setAttribute("TO_PORT", toPort);
		
		logger.info("Debug 3  MESSAGE : ");
		logger.info("Sip Application Session : "+ sas.toString()); 
		
		
		SipServletRequest message_overlay = _sipFactory.createRequest(sas, "MESSAGE", from, to);
		//28072010
		
		SipURI requestUri = (SipURI) _sipFactory.createURI("sip:singlehost"+idenodeB+"@"+en[idenodeB].ipeNodeB +":"+en[idenodeB].eNodeB_Port);
		//22072010
		//SipServletRequest message_overlay = _sipFactory.createRequest(sas, "OPTIONS", from, to);
		//SipURI requestUri = (SipURI) _sipFactory.createURI("sip:singlehost@157.159.16.91:8000");
				
		String portAudio = "";
		String portVideo = "";
		String layer = "";
		String [] temp1 = null; 
		temp1 = sdp.split("\n");
		for (int i = 0; i< temp1.length; i++){
			logger.info(temp1[i]);
			if (temp1[i].contains("m=audio")){
				String [] temp2 = null;
				temp2 = temp1[i].split(" ");
				logger.info("Port Audio:"+temp2[1]);
				portAudio = temp2[1];
			}
			
			if (temp1[i].contains("m=video")){
				String [] temp2 = null;
				temp2 = temp1[i].split(" ");
				logger.info("Port Video:"+temp2[1]);
				portVideo = temp2[1];
			}
			
			if (temp1[i].contains("a=layer")){
				String [] temp2 = null;
				temp2 = temp1[i].split(" ");
				logger.info("Layer:"+temp2[1].trim());
				layer = temp2[1];
			}

		}
		
		int iduser = 0;
		for (int j=1; j<en[idenodeB].nbrParticipant+1; j++){
			if (en[idenodeB].user[j].userURI.equals(fromUser)) {
				//logger.info("!!!!!!!!!!!! Chuyen trang thai user:"+en[idenodeB].user[j].userURI +" tu :"+ en[idenodeB].user[j].status);
				en[idenodeB].user[j].portAudio = portAudio;
				en[idenodeB].user[j].portVideo = portVideo;
				en[idenodeB].user[j].layer = layer;
				iduser = j; 
				//logger.info("!!!!!!!!!!!! Thanh trang thai user "+ en[idenodeB].user[j].userURI +" co :"+ en[idenodeB].user[j].status);
			}
		}			

		int id = en[idenodeB].user[iduser].ID+5000 ; 
		message_overlay.setRequestURI(requestUri);
		String conMessage = "JOIN"      +"\nIDNode:"+ id
									    +"\nIP:" +fromAddress
										+"\nPortAudio:"+portAudio
										+"\nPortVideo:"+portVideo
										+"\nLayer:"+layer +"\n";
										
		message_overlay.setContent(conMessage, "text/plain");
		message_overlay.send(); 
	}

	/**
	 * {@inheritDoc}
	 */
	protected void doBye(SipServletRequest request) throws ServletException,
			IOException {

		SipServletResponse sipServletResponse = request.createResponse(200);
		sipServletResponse.send();

		//28072010
		int idenodeB = -1;
		//28072010 Xac dinh User 
		logger.info("???????Xac dinh User");
		String fromUser = request.getFrom().getURI().toString(); 
		logger.info("???????"+fromUser);
		//Xac dinh eNodeB ung voi User
		for (int i=1;i<conference.nbrParticipant+1; i++){
			if (fromUser.contains(conference.userURI[i])){
				logger.info("************ Tim duoc User:"+fromUser + "== " + conference.userURI[i]);				
				idenodeB = conference.idEnodeB[i];
			}			
		}		
		logger.info("????? inodeB:" + idenodeB);
		if (idenodeB == -1 ) {
			idenodeB = 0; 
		}
		//idenodeB = 0 ; 
		String toAddress= en[idenodeB].ipeNodeB; 
		String toPort = en[idenodeB].eNodeB_Port; 

		
		logger.info("MediaPlaybackServlet: Got BYE request:\n" + request);
		SipURI from = (SipURI) request.getFrom().getURI();
		SipURI to = (SipURI) request.getTo().getURI();
		ConferenceCenter.getInstance().getConference(to.getUser()).removeParticipant(from.toString());
		//ConferenceCenter.getInstance().getConference(to.getUser()).removeParticipant(to.toString());
		//remove user from AS 
		logger.info("Process Remove User :\n");
		int iduser = 0; 
		for (int j = 0; j<2; j++){
			for (int i = 0; i < en[j].nbrParticipant+1; i++) {
				logger.info("Test Bye 1 - " + en[j].user[i+1].userURI + "--- "+from.toString());
				if (en[j].user[i+1].userURI.equals(from.toString())) {
					
					logger.info("Test Bye 1 - Remove User" + en[j].user[i+1].userURI + "from "+en[j].eNodeBURI);
					iduser = en[j].user[i+1].ID + 5000; 
					en[j].deleteParticipantenodeB(en[j].user[i+1]);
					logger.info("Test Bye 1 -"+ userID);
					userID--;
					logger.info("Test Bye 1 - enodeB "+ en[j].eNodeBURI +" has: "+ en[j].nbrParticipant+" participants");
				}			
			}

		}
		logger.info("After delete enodeB, List of participants in conference --> delete conference");
		for (int i = 1; i < nbrUser+1; i++){
			
			logger.info("User " + conference.userURI[i]+" in enode B"+ en[conference.idEnodeB[i]].eNodeBURI);
		}
		
		for (int i = 1; i < nbrUser+1; i++) {			
			if (conference.userURI[i].equals(from.toString())){
				logger.info("Test Bye 2 - Remove User " + conference.userURI[i]+ " in enodeB :"+ en[conference.idEnodeB[i]].eNodeBURI);				
				conference.deleteUser4Gconference(i);
				logger.info("Test Bye 2 - Conference has: "+ conference.nbrParticipant);
				nbrUser--; 
			}

		}

		
		//SipServletRequest req; //Request for Overlay network 
		logger.info("Tao ban tin MESSAGE LEAVE: ");
		String fromAddress = request.getRemoteAddr();
		
		//28072010
		String username = ((SipURI) request.getFrom().getURI()).getUser();
		logger.info("User: "+ username);

		SipURI toOverlay = _sipFactory.createSipURI("singlehost"+idenodeB, toAddress); 
		SipURI fromOverlay = _sipFactory.createSipURI(username, fromAddress); 
		
		
		logger.info("Debug 1  BYE MESSAGE : ");
		SipApplicationSession sas = request.getApplicationSession(); 
		logger.info("Debug 2  BYE MESSAGE : ");
		sas.setAttribute("TO_ADDRESS", toAddress); 
		sas.setAttribute("TO_PORT", toPort);
		
		logger.info("Debug 3  BYE MESSAGE : ");
		logger.info("Sip Application Session : "+ sas.toString()); 
		
		
		//SipServletRequest message_overlay = _sipFactory.createRequest(sas, "MESSAGE", fromOverlay, toOverlay);
		//22072010
		//SipServletRequest message_overlay = _sipFactory.createRequest(sas, "OPTIONS", from, to);
		//SipURI requestUri = (SipURI) _sipFactory.createURI("sip:singlehost@157.159.16.91:8000");
		SipServletRequest message_overlay = _sipFactory.createRequest(sas, "MESSAGE", fromOverlay, toOverlay);
		SipURI requestUri = (SipURI) _sipFactory.createURI("sip:singlehost"+idenodeB+"@"+en[idenodeB].ipeNodeB +":"+en[idenodeB].eNodeB_Port);

		
		
		message_overlay.setRequestURI(requestUri);
		String conMessage = "LEAVE"   + "\nIDNode:"+iduser
									  + "\nIP:"+fromAddress +"\n"; 
									     
		message_overlay.setContent(conMessage, "text/plain");
		message_overlay.send();		
		
		
	}

	/**
	 * {@inheritDoc}
	 */
	protected void doResponse(SipServletResponse response)
			throws ServletException, IOException {

		logger.info("Got response:\n" + response);
		if(response.getRequest().getMethod().equalsIgnoreCase("INVITE")) {
			if(response.getStatus() == 200) {
				Object sdpObj = response.getContent();
				byte[] sdpBytes = (byte[]) sdpObj;
				String sdp = new String(sdpBytes); 
				try {
					MsProvider provider = ConferenceCenter.getInstance().getProvider();
					MsSession session = provider.createSession();
					MsConnection connection = session.createNetworkConnection(PR_JNDI_NAME);
					ConferenceConnectionListener listener = 
						new ConferenceConnectionListener(response);
					connection.addConnectionListener(listener);
					connection.modify("$", sdp);
					

				} catch (Exception e) {
					logger.error(e);
				}

			}
		}
		super.doResponse(response);
	}
}
