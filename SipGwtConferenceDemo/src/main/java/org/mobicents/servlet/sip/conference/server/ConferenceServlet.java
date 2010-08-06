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
import java.io.InputStream;
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

import com.sun.org.apache.bcel.internal.util.ClassLoader;

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

	public int idoldnode = 0;
	
	//03082010 
	public int flag_HO_SUBSCRIBE = 0; 
	public int flag_HO_NOTIFY = 0;
	public int oldEnodeB = 0;
	public int newEnodeB = -1;
	public String username; 
	public int stt = 0; //number index user in conference
	public int stt_enodeB = 0;// number index user in enodeB 
	public int id=0;
	public int idenodeB = -1;
	
	public int nbrNodeOverlay = 0; 
	public Participant tmpHO = new Participant();  
	public String CONFIG_FILE = "enodeB.conf";
	
	
	
    @Override 
    public void init(ServletConfig servletConfig) throws ServletException {
    	
    	super.init(servletConfig); 
    	logger.info("SIP Servlet AS has been started"); 
    	for (int i = 0; i < 10; i++) {
            en[i] = new eNodeB();
		}
    	
    
    	 
    
  try
    	    {
    		 Properties props = new Properties();
    	     props.load( this.getClass().getClassLoader().getResourceAsStream("../../META-INF/"+ CONFIG_FILE));
    	     
    	     String en1Str = props.getProperty( "en1" );
    	     String en2Str = props.getProperty( "en2" );
    	     logger.info(" test " + en1Str + en2Str);
    	     if(en1Str != null && en1Str.length() > 0) {
    	    	 String[] ptrEnode = en1Str.split( "," );
    	         logger.info("Test read config file");
    	         en[0].seteNodeB(Integer.parseInt(ptrEnode[0].trim()),ptrEnode[1],ptrEnode[2],ptrEnode[3]); 
    	        } else {
    	        	en[0].seteNodeB(0,"sip:enodeB1@open-ims.test","157.159.16.172","5080");
    	        	logger.info(" Read config file default");
    	    }
    	            	            	        
    	    if(en2Str != null && en2Str.length() > 0) {
   	        	 String[] ptrEnode = en2Str.split( "," );
   	        	 en[1].seteNodeB(Integer.parseInt(ptrEnode[0].trim()),ptrEnode[1],ptrEnode[2],ptrEnode[3]);
    	    } else {
    	        	en[1].seteNodeB(1,"sip:enodeB2@open-ims.test","157.159.16.172","5090");
    	    }
    	    
    	        	
    	        
    	    }
    	 catch (Exception e) {
    	      logger.error( "Failure reading properties file.", e );
    	 }
    	
    	//en[0].seteNodeB(0,"sip:enodeB1@open-ims.test","157.159.16.172","5080");
    	//en[1].seteNodeB(1,"sip:enodeB2@open-ims.test","157.159.16.172","5090");
    	 for (int i = 0; i < 2; i++) {
 	    	logger.info("Enode B: "+ en[i].ID + "---"+en[i].eNodeBURI+"---"+en[i].eNodeB_Port);
 		}    	
		//en[1].seteNodeB(2,"sip:enodeB2@open-ims.test","157.159.16.172","5090");
    	logger.info("Init eNode");
    	
    	_sipFactory = (SipFactory) getServletContext().getAttribute( SipServlet.SIP_FACTORY);
    	
    	
    }
	
	public void print_data() throws ServletException,
			IOException{ 
		for (int j = 0; j<2; j++){
			logger.info("List user in eNode: " + en[j].eNodeBURI + " --- "+en[j].ID);
			for (int i = 1; i < en[j].nbrParticipant+1; i++) {
				logger.info("UserID: "+ en[j].user[i].ID + "\tURIuser: "+en[j].user[i].userURI);
			}
		}	
		logger.info("List user iin conference");
		for (int i = 1; i < conference.nbrParticipant +1 ; i++){
			logger.info("UserID: "+ conference.userID[i] + 
					 "\tIDenodeB: "+conference.idEnodeB[i]+
					 "\tURIuser :"+conference.userURI[i]);	
		}
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

	
	public void sendSIPmessage(SipServletRequest req, 
			                   String content_message, 
			                   String fromuser,
			                   String fromaddress, 
			                   String touser,
			                   String toaddress, 
			                   String toport, 
			                   String reqURI 
								) throws ServletException, IOException {
		SipURI to = _sipFactory.createSipURI(touser, toaddress); 
		SipURI from = _sipFactory.createSipURI(fromuser, fromaddress); 
		SipApplicationSession sas = req.getApplicationSession(); 
		sas.setAttribute("TO_ADDRESS", toaddress); 
		sas.setAttribute("TO_PORT", toport);
		SipServletRequest msg = _sipFactory.createRequest(sas, "MESSAGE", from, to); 
		SipURI reqUri = (SipURI) _sipFactory.createURI(reqURI);
		msg.setRequestURI(reqUri);
		msg.setContent(content_message, "text/plain");
		msg.send(); 
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
		
		
		
		
		String toAddress, toPort, fromAddress, fromUser, toUser, fromURI, toURI, reqURI, userURI; 
		SipURI from, to; 
		SipApplicationSession sas=req.getApplicationSession();
		String conMessage = "Test";
		SipServletRequest message_overlay = null;
		SipURI requestUri; 
		toAddress = toPort = fromAddress = fromUser = toUser = fromURI = toURI = reqURI = userURI = "";
		int idNodefromMessage= 0;
		
		
		//int oldEnodeB = idenodeB;
		//int newEnodeB = -1;
		Object sdpObj = req.getContent();
		String sdp = null; 
		sdp = sdpObj.toString();
		String [] temp1 = null; 
		temp1 = sdp.split("\n");
		
		if (temp1[0].contains("REP")){
			logger.info("=====Message REP - Xac dinh ID");
			for (int i = 1; i< temp1.length; i++){
				logger.info(temp1[i]);
				if (temp1[i].contains("IDNode")){
					String [] temp2 = null;
					temp2 = temp1[i].split(" ");
					logger.info("IDNode:"+temp2[1]);
					idNodefromMessage = Integer.parseInt(temp2[1].trim());
				}
			}
			if (temp1.length > 2 && temp1 != null ){ 
				userURI = temp1[2];
				logger.info("==="+temp1[0]+"==="+temp1[1]+"==="+temp1[2]);
			}
			
			
			
			int dem = conference.getenodeBfromID(idNodefromMessage);
			//idenodeB = conference.getenodeBfromID(idNodefromMessage);
			if (dem != -1) {
				idenodeB = dem; 
				stt = conference.getuserfromID(idNodefromMessage); //id in conference
				stt_enodeB = en[idenodeB].getindexinenodeB(idNodefromMessage); 
				fromUser = ((SipURI) req.getFrom().getURI()).getUser();
				toUser = "singlehost"+idenodeB;
				toAddress= en[idenodeB].ipeNodeB; 
				toPort = en[idenodeB].eNodeB_Port;
				fromAddress = req.getRemoteAddr();
				logger.info("=====Message REP 1 - read idenodeB"+ idenodeB );

			} else {
				dem = conference.getenodeBfromuri(userURI); 
				idenodeB = dem; 
				logger.info("=====Message REP 2 - read idenodeB"+ idenodeB );
				stt = conference.getuserfromURI(userURI); 
				stt_enodeB = en[idenodeB].getindexinenodeB(userURI); 
				logger.info("Infor tu URI ==="+dem+"==="+stt+"==="+stt_enodeB);
				fromUser = ((SipURI) req.getFrom().getURI()).getUser();
				toUser = "singlehost"+idenodeB;
				toAddress= en[idenodeB].ipeNodeB; 
				toPort = en[idenodeB].eNodeB_Port;
				fromAddress = req.getRemoteAddr();
			}
			logger.info("=====Message REP - Finish Init REP");
		}
		
		
		
		if (temp1[0].contains("REQ")){
			//28072010 Xac dinh User		
			logger.info("=====Message REQ - Xac dinh User");
			fromURI = req.getFrom().getURI().toString(); 
			logger.info("=====Message REQ -"+fromURI);
			//Xac dinh eNodeB ung voi User
			idenodeB = conference.getenodeBfromuri(fromURI); 
			stt = conference.getuserfromURI(fromURI);
			
			
			if (idenodeB == -1) {
				idenodeB = 0; 	
			}
			//id = en[idenodeB].user[stt].ID;
			//idNodefromMessage = conference.userID[stt];
			id = conference.userID[stt];
			stt_enodeB = en[idenodeB].getindexinenodeB(id);
			//id = en[idenodeB].user[stt_enodeB].ID;
			logger.info("=====Message REQ - stt in conference: " + stt + " enodeB: " + idenodeB);
			logger.info("=====Message REQ - Tim duoc UserURI: "+fromURI + "== " + conference.userURI[stt]);
			logger.info("=====Message REQ - stt in enodeB: " + stt_enodeB + " id user: " + en[idenodeB].user[stt_enodeB].ID);
			
			fromUser = ((SipURI) req.getFrom().getURI()).getUser();
			toAddress= en[idenodeB].ipeNodeB; 
			toPort = en[idenodeB].eNodeB_Port;
			fromAddress = req.getRemoteAddr();
			toUser = "singlehost"+idenodeB; 
			
			username = ((SipURI) req.getFrom().getURI()).getUser();
			logger.info("=====Message REQ - Finish Init REQ");
		}	
		 
		
		
		
		if (temp1[0].contains("REP_HANDOVER_SUBSCRIBE")){
			logger.info("Receive message : REP_HANDOVER_SUBSCRIBE");
			flag_HO_SUBSCRIBE = 1; 
		}
		//oldEnodeB = idenodeB;
		
		
		if (temp1[0].contains("REP_HANDOVER_JOIN")){
			logger.info("Receive message : REP_JOIN");
			en[idenodeB].user[stt_enodeB].ID = idNodefromMessage; 
			conference.userID[stt] = idNodefromMessage;
			newEnodeB = idenodeB;
			if (newEnodeB==1){
				oldEnodeB = 0; 
			}
			if (newEnodeB==0){
				oldEnodeB = 1; 
			}
			print_data(); 
			logger.info("?????MESSAGE REP_HANDOVER_JOIN - Tao ban tin MESSAGE LEAVE: ");
			logger.info("?????MESSAGE REP_HANDOVER_JOIN - newenodeB: " + newEnodeB);
			logger.info("?????MESSAGE REP_HANDOVER_JOIN - oldenodeB: " + oldEnodeB);
			
			fromAddress = req.getRemoteAddr();
			
			//28072010
			username = ((SipURI) req.getFrom().getURI()).getUser();

			fromUser = ((SipURI) req.getFrom().getURI()).getUser();
			fromAddress = req.getRemoteAddr();
		
			toUser = "singlehost" + oldEnodeB; 
			toAddress = en[oldEnodeB].ipeNodeB;
			toPort = en[newEnodeB].eNodeB_Port;
			reqURI = "sip:singlehost"+oldEnodeB+"@"+en[oldEnodeB].ipeNodeB +":"+en[oldEnodeB].eNodeB_Port; 
			id = en[oldEnodeB].user[idoldnode].ID;
			conMessage = "REQ_HANDOVER_LEAVE"   + "\nIDNode:"+id
			   + "\nUserURI:"+en[oldEnodeB].user[stt_enodeB].userURI +"\n"; 
			sendSIPmessage(req, conMessage, fromUser, fromAddress, toUser, toAddress, toPort, reqURI); 

			logger.info("?????MESSAGE REP_HANDOVER_JOIN -  User thuoc enodeB moi : "+en[conference.idEnodeB[stt]].eNodeBURI);
			logger.info("?????MESSAGE REP_HANDOVER_JOIN -  Xoa user enodeB cu "+en[oldEnodeB].eNodeBURI);
			//en[oldEnodeB].deleteParticipantenodeB(par);
			for (int j=1; j<en[oldEnodeB].nbrParticipant+1; j++){
				if (en[oldEnodeB].user[j].ID == tmpHO.ID) {
					logger.info("?????MESSAGE REP_HANDOVER_JOIN -  Xoa user " + en[oldEnodeB].user[j].userURI);   
					en[oldEnodeB].deleteParticipantenodeB(en[oldEnodeB].user[j]);							
				}
			}	
		}
		
		
		if (temp1[0].contains("REP_JOIN")){
			logger.info("Receive message : REP_JOIN");
			en[idenodeB].user[stt_enodeB].ID = idNodefromMessage; 
			conference.userID[stt] = idNodefromMessage;
			
/*			if ((flag_HO_NOTIFY == 1)&&(flag_HO_SUBSCRIBE == 1)){
				newEnodeB = idenodeB;
				if (newEnodeB==1){
					oldEnodeB = 0; 
				}
				if (newEnodeB==0){
					oldEnodeB = 1; 
				}
				print_data(); 
				logger.info("?????MESSAGE REP_HANDOVER_JOIN - Tao ban tin MESSAGE LEAVE: ");
				logger.info("?????MESSAGE REP_HANDOVER_JOIN - newenodeB: " + newEnodeB);
				logger.info("?????MESSAGE REP_HANDOVER_JOIN - oldenodeB: " + oldEnodeB);
				
				fromAddress = req.getRemoteAddr();
				
				//28072010
				username = ((SipURI) req.getFrom().getURI()).getUser();

				fromUser = ((SipURI) req.getFrom().getURI()).getUser();
				fromAddress = req.getRemoteAddr();
			
				toUser = "singlehost" + oldEnodeB; 
				toAddress = en[oldEnodeB].ipeNodeB;
				toPort = en[newEnodeB].eNodeB_Port;
				reqURI = "sip:singlehost"+oldEnodeB+"@"+en[oldEnodeB].ipeNodeB +":"+en[oldEnodeB].eNodeB_Port; 
				id = en[oldEnodeB].user[idoldnode].ID;
				conMessage = "REQ_LEAVE"   + "\nIDNode:"+id
				   + "\nIP:"+fromAddress +"\n"; 
				sendSIPmessage(req, conMessage, fromUser, fromAddress, toUser, toAddress, toPort, reqURI); 
	
				logger.info("?????MESSAGE REP_HANDOVER_JOIN -  User thuoc enodeB moi : "+en[conference.idEnodeB[stt]].eNodeBURI);
				logger.info("?????MESSAGE REP_HANDOVER_JOIN -  Xoa user enodeB cu "+en[oldEnodeB].eNodeBURI);
				//en[oldEnodeB].deleteParticipantenodeB(par);
				for (int j=1; j<en[oldEnodeB].nbrParticipant+1; j++){
					if (en[oldEnodeB].user[j].ID == tmpHO.ID) {
						logger.info("?????MESSAGE REP_HANDOVER_JOIN -  Xoa user " + en[oldEnodeB].user[j].userURI);   
						en[oldEnodeB].deleteParticipantenodeB(en[oldEnodeB].user[j]);							
					}
				}				
*/				flag_HO_NOTIFY = 0; 
				flag_HO_SUBSCRIBE = 0; 	
			print_data(); 
		}
		
		if (temp1[0].equals("REP_LEAVE")){
			logger.info("Receive message : REP_LEAVE");

		}
		
		if (temp1[0].equals("REP_PAUSE")){
			logger.info("Receive message : REP_PAUSE");

		}
		
		if (temp1[0].equals("REP_RETURN")){
			logger.info("Receive message : REP_RETURN");

		}

		if (temp1[0].contains("REQ_PAUSE")){
				logger.info("*******REQ-PAUSE - Receive message : PAUSE");
				logger.info("*******REQ-PAUSE - Send Overlay message : PAUSE");
				conMessage = "REQ_PAUSE"
						+"\nIDNode:"+id
						+"\nIP:"+fromAddress;
				
				sendSIPmessage(req, conMessage, fromUser, fromAddress, toUser, toAddress, toPort, reqURI);
				//23072010 - Change status user 
				logger.info("******MESSAGE REQ_PAUSE - Xac dinh User");			 
				logger.info("******MESSAGE REQ_PAUSE - User: "+fromURI);
						logger.info("*****MESSAGE REQ_PAUSE - Tim duoc User:"+fromURI);
						logger.info("*****MESSAGE REQ_PAUSE - Chuyen trang thai user :");
						for (int j=1; j<en[idenodeB].nbrParticipant+1; j++){
							if (en[idenodeB].user[j].userURI.equals(fromURI)) {
								logger.info("*****MESSAGE REQ_PAUSE - Chuyen trang thai user:"+en[idenodeB].user[j].userURI +" tu :"+ en[idenodeB].user[j].status);
								en[idenodeB].user[j].status = 1; //PAUSE 
								logger.info("*****MESSAGE REQ_PAUSE - Thanh trang thai user "+ en[idenodeB].user[j].userURI +" co :"+ en[idenodeB].user[j].status);
							}
						}			
		}
		if (temp1[0].contains("REQ_RETURN")){
				logger.info(".....MESSAGE-REQ_RETURN - Receive message : RETURN");
				conMessage = "REQ_RETURN"
						+"\nIDNode:"+id
						+"\nIP:"+fromAddress;
				
				sendSIPmessage(req, conMessage, fromUser, fromAddress, toUser, toAddress, toPort, reqURI);
				//23072010 - Change status user 
				logger.info(".....MESSAGE-REQ_RETURN - Xac dinh User");
				logger.info(".....MESSAGE-REQ_RETURN - "+fromURI);
				logger.info(".....MESSAGE-REQ_RETURN - Tim duoc User:"+fromURI );
				logger.info(".....MESSAGE-REQ_RETURN - Chuyen trang thai user :");
					for (int j=1; j<en[idenodeB].nbrParticipant+1; j++){
						if (en[idenodeB].user[j].userURI.equals(fromURI)) {
							logger.info("!!!!!!!!!!!! Chuyen trang thai user:"+en[idenodeB].user[j].userURI +" tu :"+ en[idenodeB].user[j].status);
							en[idenodeB].user[j].status = 0; //RETURN 
							logger.info("!!!!!!!!!!!! Thanh trang thai user "+ en[idenodeB].user[j].userURI +" co :"+ en[idenodeB].user[j].status);
						}
					}			
		}
        
		
		//22072010		
		if (temp1[0].contains("REQ_HANDOVER")){
			oldEnodeB = idenodeB;
			
			logger.info("!!!!!MESSAGE REQ_HANDOVER - Receive message : HANDOVER");
			logger.info("!!!!!MESSAGE REQ_HANDOVER - Xac dinh User");
			//String fromUser = req.getFrom().getURI().toString(); 
			logger.info("!!!!!MESSAGE REQ_HANDOVER - "+fromURI);
			logger.info("!!!!!MESSAGE REQ_HANDOVER -  Tim duoc User:"+fromURI + "==");
			logger.info("!!!!!MESSAGE REQ_HANDOVER -  Chuyen User tu "+en[idenodeB].eNodeBURI +"sang new enodeB ");
			if (oldEnodeB==0){
				newEnodeB = 1; 
					} else {
				newEnodeB = 0;
				}
			idoldnode = stt; 
			logger.info("!!!!!MESSAGE REQ_HANDOVER - OldenodeB: "+oldEnodeB);
			logger.info("!!!!!MESSAGE REQ_HANDOVER - NewenodeB: "+newEnodeB);

			Participant par = new Participant(); 
			int tmpID = 0; 
			if (newEnodeB == 1){
			//tmpID = 5999 + en[1].nbrParticipant + 1;
			}
			if (newEnodeB == 0){
			//tmpID = 4999 + en[0].nbrParticipant + 1;
			}
			par.setParticipant(tmpID, fromURI, 0 , 0); 
			en[newEnodeB].addParticipanteNodeB(par); 
			conference.idEnodeB[stt] = newEnodeB;
			conference.userID[stt] = tmpID; 
				
			logger.info("!!!!!MESSAGE REQ_HANDOVER - UE in new Enode:"+ newEnodeB + "\nUser:" + fromUser  + "\tstt : "+ stt);
			//Create SIP message to send old enodeB : HANDOVER_SUBSCRIBE  
			logger.info("!!!!!MESSAGE REQ_HANDOVER - Tao ban tin MESSAGE REQ_HANDOVER_SUBSCRIBE: ");

			toAddress = en[oldEnodeB].ipeNodeB;
			toPort = en[oldEnodeB].eNodeB_Port;
			toUser = "singlehost"+oldEnodeB+1; 				
			fromAddress = req.getRemoteAddr();
			fromUser = ((SipURI) req.getFrom().getURI()).getUser();
			reqURI = "sip:singlehost"+oldEnodeB+"@"+en[oldEnodeB].ipeNodeB +":"+en[oldEnodeB].eNodeB_Port;
						
			id = en[oldEnodeB].user[stt_enodeB].ID;
			tmpHO = en[oldEnodeB].user[stt_enodeB]; 
			
			conMessage = "REQ_HANDOVER_SUBSCRIBE" 
				+"\nIDNode:"+id 
				+"\n"+fromUser;
			sendSIPmessage(req, conMessage, fromUser, fromAddress, toUser, toAddress, toPort, reqURI);
/*			logger.info("!!!!!MESSAGE REQ_HANDOVER - send message HANDOVER SUBSCRIBE "); 	
			logger.info("!!!!!MESSAGE REQ_HANDOVER - List of participants in conference");
			logger.info("!!!!!MESSAGE REQ_HANDOVER - nbrUser:"+ nbrUser + "===" + conference.nbrParticipant);
					
			for (int k = 1; k < conference.nbrParticipant+1; k++){	
				logger.info("User " + conference.userURI[k]+" in enode B "+ en[conference.idEnodeB[k]].eNodeBURI);
			}*/
					
			//int sttnew = en[newEnodeB].nbrParticipant; 
			toAddress = en[newEnodeB].ipeNodeB;
			toPort = en[newEnodeB].eNodeB_Port;
			id = tmpID;
					
			reqURI = "sip:singlehost"+newEnodeB+"@"+en[newEnodeB].ipeNodeB +":"+en[newEnodeB].eNodeB_Port;
			logger.info("!!!!!MESSAGE REQ_HANDOVER -  id " + stt + "\tID "+ en[newEnodeB].user[stt].ID);
/*			conMessage = "REQ_HANDOVER_NOTIFY"
						+"\nIDNode:"+tmpID  
						+"\n"+fromURI;
*/
			conMessage = "REQ_HANDOVER_NOTIFY"
							+"\n"+en[oldEnodeB].ipeNodeB +":"+en[oldEnodeB].eNodeB_Port;  
							

			sendSIPmessage(req, conMessage, fromUser, fromAddress, toUser, toAddress, toPort, reqURI); 
			logger.info("!!!!!MESSAGE REQ_HANDOVER - Finish HANDOVER ");
			print_data(); 
		}
		
		
		if (temp1[0].contains("REP_HANDOVER_NOTIFY")){
			//newEnodeB = idenodeB; 
			logger.info("?????MESSAGE REP_HANDOVER_NOTIFY - Tao ban tin MESSAGE JOIN: ");
			logger.info("?????MESSAGE REP_HANDOVER_NOTIFY - neweNode B"+newEnodeB);
			//int newstt = 0;
			/*for (int i = 1; i< en[newEnodeB].nbrParticipant+1; i++ ){
				if (en[newEnodeB].user[i].ID == idNodefromMessage){
					newstt = i; 
				}
			}*/
			
			//newstt = en[newEnodeB].getindexinenodeB(uri)
			
			toAddress = en[newEnodeB].ipeNodeB;
			toPort = en[newEnodeB].eNodeB_Port;
			toUser = "singlehost"+newEnodeB+1;
			reqURI = "sip:singlehost"+newEnodeB+"@"+en[newEnodeB].ipeNodeB +":"+en[newEnodeB].eNodeB_Port; 
			logger.info("!!!!!MESSAGE REQ_HANDOVER -  id " + stt_enodeB + "\tID "+ en[newEnodeB].user[stt_enodeB].ID);
			/*id = en[newEnodeB].user[newstt].ID;
			logger.info("?????MESSAGE REP_HANDOVER_NOTIFY - Test 3");
			en[newEnodeB].user[newstt].portAudio = tmpHO.portAudio;
			en[newEnodeB].user[newstt].portVideo = tmpHO.portVideo;
			en[newEnodeB].user[newstt].layer = tmpHO.layer;*/ 
			
			id = en[newEnodeB].user[stt_enodeB].ID;
			logger.info("?????MESSAGE REP_HANDOVER_NOTIFY - Test 3");
			en[newEnodeB].user[stt_enodeB].portAudio = tmpHO.portAudio;
			en[newEnodeB].user[stt_enodeB].portVideo = tmpHO.portVideo;
			en[newEnodeB].user[stt_enodeB].layer = tmpHO.layer;
			
			
			//28072010
			conMessage = "REQ_HANDOVER_JOIN"
						+"\nIDNode:"+id 
						+"\nUserURI:"+ en[newEnodeB].user[stt_enodeB].userURI  
						+"\nIP"+fromAddress
						+"\nPortAudio"+en[newEnodeB].user[stt_enodeB].portAudio
						+"\nPortVideo"+en[newEnodeB].user[stt_enodeB].portVideo	
						+"\nLayer"+en[newEnodeB].user[stt_enodeB].layer;			
			flag_HO_NOTIFY = 1;
			sendSIPmessage(req, conMessage, fromUser, fromAddress, toUser, toAddress, toPort, reqURI);
			print_data(); 
		}
		
		
		if (temp1[0].contains("REQ_QUERY")){
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

			fromUser = "AS"; 
			fromAddress = ipSource;
		
			toUser = "singlehost";
			toAddress = ipDest; 
			toPort = portDest; 
			
			logger.info("Receive message : QUERY"); 
			logger.info("Send Overlay message: KEEPALIVE"); 
			conMessage = "REP_KEEP_ALIVE\t";
			for (int i=0; i<en[idenodeB].nbrParticipant;i++){
				conMessage = conMessage+"ideNodeB="+en[idenodeB].ID+ 
					             "\nid="+i+1+
					             "\nuri="+en[idenodeB].user[i+1].userURI+
					             "\nrole="+en[idenodeB].user[i+1].role+
					             "\nstatus="+en[idenodeB].user[i+1].status;  
			}
			sendSIPmessage(req, conMessage, fromUser, fromAddress, toUser, toAddress, toPort, reqURI); 
				
		}

		if (temp1[0].contains("MEMBER_LIST")) {
			boolean newuser = true;
			int[] mark = new int[100]; 
			for (int i = 0; i< 100; i++){
				mark[i] = 0; 
			}
			
			logger.info("=====Message MEMBER_LIST ");
			logger.info("=====Message MEMBER_LIST - length"+ temp1.length);
			for (int i = 1; i< temp1.length; i++){
				logger.info(temp1[i]);
				String [] temp2 = null;
				temp2 = temp1[i].split("\t");
				//logger.info("IDNode:"+temp2[0] + "IP" + temp2[1]); 
				idNodefromMessage = Integer.parseInt(temp2[0].trim());	
				for (int j = 1; j<conference.nbrParticipant+1; j++  ){
					if (conference.userID[j] == idNodefromMessage){
						newuser = false;
						mark[i] = 1; 
					}
				}
				if (newuser) {
					conference.setuser4GConference(temp2[1], -1, idNodefromMessage);
					mark[i] = 1; 
				}				 
							
			}
			for (int j = 1; j<conference.nbrParticipant+1; j++  ){
				if ((conference.idEnodeB[j]==-1)&&(mark[j]==0)){
					conference.deleteUser4Gconference(j); 
				}
			}
			logger.info("=====Message MEMBER_LIST - List node thuoc Overlay");
			for (int j = 1; j<conference.nbrParticipant+1; j++  ){
				if (conference.idEnodeB[j]==-1){
					logger.info("=====Message MEMBER_LIST - user: " + conference.userURI[j] +"\tID:"+conference.userID[j]);
				
				}
			}
			
			logger.info("=====Message MEMBER_LIST - List node in enode B ");
			for (int j = 1; j<conference.nbrParticipant+1; j++  ){
				if (conference.idEnodeB[j]>=0){
					logger.info("=====Message MEMBER_LIST  - user: " 
				+ conference.userURI[j] 
				+"\tID:"+conference.userID[j] 
				+ "\tenodeB:" + conference.idEnodeB[j]);
				}
			}						
		}			
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
			if (userID < 1) {
				userID = 1;			
			} 
			//int tmpID = 4999;
			int tmpID = 0;
			if ((nbrUser==1)||(nbrUser==2)) {
				//tmpID = tmpID + userID;
				//tmpID = tmpID + en[0].nbrParticipant + 1;
				par.setParticipant(tmpID, fromURI, 0 , 0);
				en[0].addParticipanteNodeB(par);
				conference.setuser4GConference(fromURI, 0, tmpID);
			}
			if ((nbrUser==3)||(nbrUser==4)) {
				//tmpID = 5999;
				tmpID = 0;
				//tmpID = tmpID + userID;
				//tmpID = tmpID + en[1].nbrParticipant + 1;
				par.setParticipant(tmpID, fromURI, 0 , 0);
				en[1].addParticipanteNodeB(par);
				conference.setuser4GConference(fromURI, 1, tmpID);
			}
			logger.info("Test 1 - enodeB :" + en[0].eNodeBURI + "has "+ en[0].nbrParticipant+" participants");
			for (int i = 0; i < en[0].nbrParticipant; i++) {
				logger.info("Test 1 - User["+i+"]="+en[0].user[i+1].userURI);
			}
			
			logger.info("Test 1 - enodeB :" + en[1].eNodeBURI + "has "+ en[1].nbrParticipant+" participants");
			for (int i = 0; i < en[1].nbrParticipant; i++) {
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
		
		
		logger.info("*****SIP INVITE - "+fromUser);
		//Xac dinh eNodeB ung voi User
		for (int i=1;i<conference.nbrParticipant+1; i++){
			logger.info("*****SIP INVITE - User:" + conference.userURI[i]);
			if (fromUser.contains(conference.userURI[i])){
				logger.info("*****SIP INVITE - Tim duoc User:"+fromUser + "== " + conference.userURI[i]);				
				idenodeB = conference.idEnodeB[i];
			}			
		}
		logger.info("*****SIP INVITE - inodeB:" + idenodeB);
		if (idenodeB == -1){
			idenodeB = 0; 
		}
		//idenodeB = 0;
		//SipServletRequest req; //Request for Overlay network 
		logger.info("*****SIP INVITE - Tao ban tin MESSAGE JOIN: ");
		String toAddress= en[idenodeB].ipeNodeB; 
		String toPort = en[idenodeB].eNodeB_Port; 

		String fromAddress = request.getRemoteAddr();

		SipURI to = _sipFactory.createSipURI("singlehost"+idenodeB, toAddress); 
		SipURI from = _sipFactory.createSipURI(username, fromAddress); 
		SipApplicationSession sas = request.getApplicationSession(); 
		sas.setAttribute("TO_ADDRESS", toAddress); 
		sas.setAttribute("TO_PORT", toPort);				
		SipServletRequest message_overlay = _sipFactory.createRequest(sas, "MESSAGE", from, to);
		//28072010
		
		SipURI requestUri = (SipURI) _sipFactory.createURI("sip:singlehost"+idenodeB+"@"+en[idenodeB].ipeNodeB +":"+en[idenodeB].eNodeB_Port);
		//22072010
				
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
				en[idenodeB].user[j].portAudio = portAudio;
				en[idenodeB].user[j].portVideo = portVideo;
				en[idenodeB].user[j].layer = layer;
				iduser = j; 
			}
		}			

		int id = en[idenodeB].user[iduser].ID;
		String useruri = en[idenodeB].user[iduser].userURI;
		message_overlay.setRequestURI(requestUri);
/*		String conMessage = "REQ_JOIN"      +"\nIDNode:"+ id
									    +"\nIP:" +fromAddress
										+"\nPortAudio:"+portAudio
										+"\nPortVideo:"+portVideo
										+"\nLayer:"+layer +"\n";
*/
		String conMessage = "REQ_JOIN"      +"\nIDNode:"+ id
											+"\nUserURI:"+ useruri  
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
		
		print_data();
		//28072010
		int idenodeB = -1;
		//28072010 Xac dinh User 
		logger.info("~~~~~MESSAGE BYE - Xac dinh User");
		String fromUser = request.getFrom().getURI().toString(); 
		
		logger.info("???????"+fromUser);
		//Xac dinh eNodeB ung voi User
		for (int i=1;i<conference.nbrParticipant+1; i++){
			if (fromUser.contains(conference.userURI[i])){
				logger.info("~~~~~MESSAGE BYE - Tim duoc User:"+fromUser + "== " + conference.userURI[i]);				
				idenodeB = conference.idEnodeB[i];
			}			
		}		
		logger.info("????? inodeB:" + idenodeB);
/*		if (idenodeB == -1 ) {
			idenodeB = 0; 
		}*/
/*		if ((flag_HO_NOTIFY == 1)&&(flag_HO_SUBSCRIBE == 1)){
			logger.info("????? old node :" + oldEnodeB+ " new node " + newEnodeB);
			idenodeB = oldEnodeB; 
			flag_HO_NOTIFY = 0 ; 
			flag_HO_SUBSCRIBE = 0;
		}
*/		//idenodeB = 0 ; 
		String toAddress= en[idenodeB].ipeNodeB; 
		String toPort = en[idenodeB].eNodeB_Port; 

		
		logger.info("MediaPlaybackServlet: Got BYE request:\n" + request);
		SipURI from = (SipURI) request.getFrom().getURI();
		SipURI to = (SipURI) request.getTo().getURI();
		ConferenceCenter.getInstance().getConference(to.getUser()).removeParticipant(from.toString());
		//remove user from AS 
		logger.info("Process Remove User :\n");
		int iduser = 0; 
		for (int j = 0; j<2; j++){
			for (int i = 1; i < en[j].nbrParticipant+1; i++) {
				logger.info("Test Bye 1 - " + en[j].user[i].userURI + "--- "+from.toString());
				if (en[j].user[i].userURI.equals(from.toString())) {
					
					logger.info("Test Bye 1 - Remove User" + en[j].user[i].userURI + "from "+en[j].eNodeBURI);

					iduser = en[j].user[i].ID; 
					en[j].deleteParticipantenodeB(en[j].user[i]);
					logger.info("Test Bye 1 - iduser "+ iduser);
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
		logger.info("~~~~~MESSAGE BYE - Tao ban tin MESSAGE LEAVE: ");
		String fromAddress = request.getRemoteAddr();
		
		//28072010
		String username = ((SipURI) request.getFrom().getURI()).getUser();
		String fromURI = ((SipURI) request.getFrom().getURI()).toString(); ; 
		logger.info("User: "+ username);

		SipURI toOverlay = _sipFactory.createSipURI("singlehost"+idenodeB, toAddress); 
		SipURI fromOverlay = _sipFactory.createSipURI(username, fromAddress); 
				
		SipApplicationSession sas = request.getApplicationSession(); 
		sas.setAttribute("TO_ADDRESS", toAddress); 
		sas.setAttribute("TO_PORT", toPort);
		logger.info("Sip Application Session : "+ sas.toString()); 
		
		//22072010
		SipServletRequest message_overlay = _sipFactory.createRequest(sas, "MESSAGE", fromOverlay, toOverlay);
		SipURI requestUri = (SipURI) _sipFactory.createURI("sip:singlehost"+idenodeB+"@"+en[idenodeB].ipeNodeB +":"+en[idenodeB].eNodeB_Port);		
		message_overlay.setRequestURI(requestUri);
		String conMessage = "REQ_LEAVE"   + "\nIDNode:"+iduser
									  + "\nUserURI:"+fromURI +"\n"; 
									     
		message_overlay.setContent(conMessage, "text/plain");
		message_overlay.send();
		print_data();
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
