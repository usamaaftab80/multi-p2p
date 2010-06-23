package com.ericsson;

import java.io.IOException;
import java.rmi.ServerException;
import java.util.HashMap;
import java.util.Map;

import javax.servlet.sip.Address;
import javax.servlet.sip.SipApplicationSession;
import javax.servlet.sip.SipServlet;
import javax.servlet.sip.SipFactory;
import javax.servlet.sip.SipServletMessage;
import javax.servlet.sip.SipSession;
import javax.servlet.sip.SipURI;
import javax.servlet.ServletResponse;
import javax.servlet.ServletRequest;
import javax.servlet.sip.SipServletResponse;
import javax.servlet.sip.SipServletRequest;
import javax.servlet.ServletException;
import javax.servlet.ServletContext;
import javax.servlet.ServletConfig;

import com.ericsson.Conference;
import com.ericsson.Participant;

public class AS_MCU extends SipServlet {
	/**
     * 
     */
	private static final long serialVersionUID = 5274710663068941773L;

	/**
	 * Name of the p-asserted-identity header.
	 */
	private static final String ASSERTED_IDENTITY_HEADER = "p-asserted-identity";

	/**
	 * When a servlet keeps information about sessions, it should implement a
	 * SessionListener to know when the session is being invalidated. The sip
	 * container can invalidate a session at any time. However for this sample
	 * application we will assume that sessions are always valid.
	 */
	private Map<SipSession, SipSession> sessionMap = new HashMap<SipSession, SipSession>();

	/**
	 * The SIP Factory. Can be used to create URI and requests.
	 */
	private SipFactory sipFactory;

	/**
	 * Variable of managing conference
	 * 
	 */
	private Conference lstConference[] = new Conference[10];
	private int nbrConference = 0;

	private void send183(SipServletRequest req) throws ServletException,IOException {
		try {
			SipServletResponse resp = req.createResponse(183);
			//resp.addHeader("Require", "precondition");
			resp.addHeader("Require", "100rel");
			resp.sendReliably();
			//resp.send();
			//log("Sent 183 for " + req.getMethod() + " request. \n" + resp);
		} catch (ServletException e){
			System.out.println("Loi o 183");
			//System.out.println(e.toString());
		}
		
		
	}

	/**
	 * @inheritDoc
	 */
	public void init(ServletConfig config) throws ServletException {
		super.init(config);
		ServletContext context = config.getServletContext();
		sipFactory = (SipFactory) context
				.getAttribute("javax.servlet.sip.SipFactory");
	}

	/**
	 * Processing conference
	 * 
	 */
	public void createConference() {

	}

	/**
	 * @inheritDoc
	 */
	protected void doAck(SipServletRequest sipServletRequest)
			throws ServletException, IOException {
		//TODO: Implement this method
		System.out.println("Nhan duoc ban tin ACK");
	}

	/**
	 * @inheritDoc
	 */
	protected void doPrack(SipServletRequest sipServletRequest)
		throws ServletException, IOException {
		//TODO: Implement this method
		// Send back 200 OK to accept the session
		System.out.println("Nhan duoc ban tin PRACK");
		//SipServletResponse response = sipServletRequest.createResponse(200);
		//response.send();		
	}

	/**
	 * The INVITE is used to initiate a dialog between two users. The servlet
	 * will intercept all subssequent MESSAGEs in the dialog and send them to
	 * the other side. Since the servlet is acting as a B2BUA, the requests are
	 * received and handled (200 OK) before being re-created in the
	 * corresponding dialog.
	 */
	protected void doInvite(SipServletRequest sipServletRequest)
			throws ServletException, IOException {

		// Edit : process message INVITE sip:participant@ericsson.com
		Address from = sipServletRequest.getFrom();
		Address to = sipServletRequest.getTo();
		// System.out.print("\nTruong du lieu To:\n" + to.getValue() + "\n"
		// + to.getDisplayName());
		System.out.println(to.getURI().toString());
		try {
			if (to.getURI().toString().equals("sip:conference@ericsson.com")){
				System.out.println("Xu ly Intitialized Conference");
				nbrConference = 1;
				System.out.println("test1");
				lstConference[nbrConference] = new Conference();
				System.out.println("test2");
				int i = (lstConference[nbrConference].nbrParticipant++);
				System.out.println("test3");
				lstConference[nbrConference].user[1].ID = 1;
				System.out.println("test4");
				lstConference[nbrConference].user[1].userURI = from.getURI().toString();
				System.out.println("test5");
				i = 2;
				lstConference[nbrConference].idChairman = 1;
				System.out.println("test6");
				lstConference[nbrConference].user[i].ID = i;
				System.out.println("test7");
				lstConference[nbrConference].user[i].userURI = from.getURI().toString();
				System.out.println("\n nbr Participant:"
						+ lstConference[nbrConference].nbrParticipant);
				System.out.println("ID user:" + i + "\n name :"
						+ from.getDisplayName());
				System.out.println("Da tao conference!");
				// The route is required because we want the request to go directory
				// to
				// the s-cscf.
				addCscfRoute(sipServletRequest);
				//System.out.println("Tim NULL 3");
				// We also need to add the p-asserted-identity header for the s-cscf
				// to
				// validate our request
				String assertedIdentity = sipServletRequest
						.getHeader(ASSERTED_IDENTITY_HEADER);
				addAssertedIdentity(sipServletRequest, assertedIdentity);
				//System.out.println("Tim NULL 4");
				// Set the default handler for the session. The default handler is
				// the
				// name of the servlet
				// as described in the sip.xml
				sipServletRequest.getSession().setHandler("AS_MCU");

				SipServletResponse response = sipServletRequest.createResponse(200);
				response.send();

				//send183(sipServletRequest);
				// Put the two entries in the map : one to match the callee with the
				// caller and vice-versa. These entries will then be used to forward
				// messages.
				// More code should handle the error cases (eg if the INVITE is
				// refused)
				// but this is not done here.
				SipSession initSession = sipServletRequest.getSession();
				sessionMap.put(initSession, initSession);
				//sessionMap.put(calleeSession, callerSession);
				//sessionMap.put(callerSession, calleeSession);
				System.out.println("Tao 1 session ket noi den initator");

			}			
		} catch (IOException e){
			System.out.println("Loi init conference");
		}
		
		/*
		if (to.getDisplayName().equals("participant")) {
			
			System.out.println("Xu ly ban tin participant Conference");
			System.out.print("Thong tin xu ly : test \n");
			nbrConference = 1;
			System.out.println("test1");
			lstConference[nbrConference] = new Conference();
			System.out.println("test2");
			int i = (lstConference[nbrConference].nbrParticipant++);
			//System.out.println("test3");
			//lstConference[nbrConference].user[1].ID = 1;
			//System.out.println("test4");
			//lstConference[nbrConference].user[1].userURI = from.getURI().toString();
			//System.out.println("test5");
			//i = 2;
			lstConference[nbrConference].idChairman = 1;
			System.out.println("test6");
			lstConference[nbrConference].user[i].ID = i;
			System.out.println("test7");
			lstConference[nbrConference].user[i].userURI = from.getURI().toString();
			System.out.println("\n nbr Participant:"
					+ lstConference[nbrConference].nbrParticipant);
			System.out.println("ID user:" + i + "\n name :"
					+ from.getDisplayName());
			// to.setValue("Alice<sip:alice@ericsson>");
			// Address toChair =
			// sipFactory.createAddress("<sip:alice@ericsson.com>");
			// toChair.setDisplayName("Alice");
			// toChair.setParameter("alice", "sip:alice@ericsson.com");
			to = sipFactory.createAddress("<sip:alice@ericsson.com>");
			to.setDisplayName("Alice");
			System.out.println("Name chair:" + to.getDisplayName()
					+ to.getValue());
			SipServletResponse response = sipServletRequest.createResponse(200);
			response.send();

			// process message INVITE sip:participant@ericsson.com

			// Create the new INVITE for the destinator
			// Address from = sipServletRequest.getFrom();
			// Address to = sipServletRequest.getTo();

			System.out.println("Tim NULL 1");
			SipApplicationSession applicationSession = sipFactory
					.createApplicationSession();
			System.out.println("Tim NULL 2");
			SipServletRequest request = sipFactory.createRequest(
					applicationSession, "INVITE", from, to);

			// The route is required because we want the request to go directory
			// to
			// the s-cscf.
			addCscfRoute(request);
			System.out.println("Tim NULL 3");
			// We also need to add the p-asserted-identity header for the s-cscf
			// to
			// validate our request
			String assertedIdentity = sipServletRequest
					.getHeader(ASSERTED_IDENTITY_HEADER);
			addAssertedIdentity(request, assertedIdentity);
			System.out.println("Tim NULL 4");
			// Set the default handler for the session. The default handler is
			// the
			// name of the servlet
			// as described in the sip.xml
			request.getSession().setHandler("AS_MCU");

			// Send the request
			request.send();

			// Put the two entries in the map : one to match the callee with the
			// caller and vice-versa. These entries will then be used to forward
			// messages.
			// More code should handle the error cases (eg if the INVITE is
			// refused)
			// but this is not done here.
			//SipSession calleeSession = request.getSession();
			//SipSession callerSession = sipServletRequest.getSession();

		} else {
			//System.out.println("Nhan duoc INVITE");
			// Send back 200 OK to accept the session
			//SipServletResponse response = sipServletRequest.createResponse(200);
			//response.send();
			//send183(sipServletRequest);

			// process message INVITE sip:participant@ericsson.com

			// Create the new INVITE for the destinator
			// Address from = sipServletRequest.getFrom();
			// Address to = sipServletRequest.getTo();
			
			 * System.out.println("Tim NULL 1"); SipApplicationSession
			 * applicationSession = sipFactory .createApplicationSession();
			 * System.out.println("Tim NULL 2"); SipServletRequest request =
			 * sipFactory.createRequest( applicationSession, "INVITE", from,
			 * to);
			 * 
			 * // The route is required because we want the request to go
			 * directory to // the s-cscf. addCscfRoute(request);
			 * System.out.println("Tim NULL 3"); // We also need to add the
			 * p-asserted-identity header for the s-cscf to // validate our
			 * request String assertedIdentity = sipServletRequest
			 * .getHeader(ASSERTED_IDENTITY_HEADER);
			 * addAssertedIdentity(request, assertedIdentity);
			 * System.out.println("Tim NULL 4"); // Set the default handler for
			 * the session. The default handler is the // name of the servlet //
			 * as described in the sip.xml
			 * request.getSession().setHandler("B2BUAServletJSR116");
			 * 
			 * // Send the request request.send();
			 * 
			 * // Put the two entries in the map : one to match the callee with
			 * the // caller and vice-versa. These entries will then be used to
			 * forward // messages. // More code should handle the error cases
			 * (eg if the INVITE is refused) // but this is not done here.
			 * SipSession calleeSession = request.getSession(); SipSession
			 * callerSession = sipServletRequest.getSession();
			 * sessionMap.put(calleeSession, callerSession);
			 * sessionMap.put(callerSession, calleeSession);
			 * System.out.println("Tim NULL 5");
			 
		}*/
	}

	/**
	 * Adds the p-asserted-identity header to <code>request</code>. The content
	 * of the header is determiend by <code>assertedIdentity</code>.
	 * 
	 * @param request
	 *            the request to which the p-asserted-identity is added.
	 * @param assertedIdentity
	 *            the content of the header
	 */
	private void addAssertedIdentity(SipServletRequest request,
			String assertedIdentity) {
		request.setHeader(ASSERTED_IDENTITY_HEADER, assertedIdentity);
	}

	/**
	 * Adds a route to the request. This will force the request to be routed to
	 * the s-cscf which is located by default on port 5082 on the localhost.
	 * This value needs to be changed if the s-cscf is located elsewhere.
	 * 
	 * @param request
	 *            request to be updated with the new route.
	 */
	private void addCscfRoute(SipServletRequest request) {
		SipURI route = sipFactory.createSipURI("", "127.0.0.1:5082");
		request.pushRoute(route);
	}

	@Override
	protected void doSuccessResponse(SipServletResponse resp)
			throws ServletException, IOException {
		// when a 200 OK for an INVITE is received, send an ACK
		if (hasCorrespondingSession(resp) && "INVITE".equals(resp.getMethod())) {
			SipServletRequest ack = resp.createAck();
			ack.send();
		}
	}

	/**
	 * Returns <code>true</code> if the message has a session.
	 * 
	 * @param resp
	 * @return
	 */
	private boolean hasCorrespondingSession(SipServletMessage message) {
		return sessionMap.get(message.getSession()) != null;
	}

	/**
	 * When a MESSAGE request is received, the servlet checks if it is part of a
	 * session already handled. If so, it tries to find the matching session and
	 * sends a new MESSAGE to the destinator.
	 */
	protected void doMessage(SipServletRequest req) throws ServletException,
			IOException {
		// Send back 200 ok
		System.out.print("Nhan duoc ban tin thi tra loi 200 OK ");
		SipServletResponse response = req.createResponse(200);
		response.send();

		// Edit : process message INVITE sip:create@ericsson.com
		/*
		 * Address from = req.getFrom(); Address to = req.getTo();
		 * System.out.print("\nTruong du lieu To:\n" + to.getValue() + "\n" +
		 * to.getDisplayName()); if (to.getDisplayName().equals("create")) {
		 * System.out.println("Xu ly ban tin create Conference");
		 * System.out.print("Thong tin xu ly : test Message \n"); // create new
		 * conference nbrConference++; System.out.print("nbr Conf:" +
		 * nbrConference); lstConference[nbrConference] = new Conference(); int
		 * i = (lstConference[nbrConference].nbrParticipant++);
		 * System.out.println("\n nbr Participant:" +
		 * lstConference[nbrConference].nbrParticipant);
		 * lstConference[nbrConference].idChairman = i;
		 * lstConference[nbrConference].user[i].ID = i;
		 * lstConference[nbrConference].user[i].Name = from.getDisplayName();
		 * System.out.println("ID user:" + i + "\n name :" +
		 * from.getDisplayName()); }
		 */

		if (hasCorrespondingSession(req)) {
			System.out.print("Trong session: create 1 request");
			// Create the new request in the corresponding dialog
			SipSession session = req.getSession();
			SipSession correspondingSession = sessionMap.get(session);
			SipServletRequest forwardedRequest = correspondingSession
					.createRequest(req.getMethod());

			// Add asserted identity
			String assertedIdentity = "<"
					+ forwardedRequest.getFrom().getURI().toString() + ">";
			addAssertedIdentity(forwardedRequest, assertedIdentity);

			// Copy the content of the message
			forwardedRequest.setContent(req.getContent(), req.getContentType());

			forwardedRequest.send();
			System.out.print("\nTrong session: Da gui ban tin request di ");
		}
	}
}