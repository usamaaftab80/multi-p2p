package org.mobicents.servlet.sip.conference.server;

public class overlayPeer {
	private int peerID; // ID Peer
	private String IP; //IP of Peer 
	private int Role; // Role of peer
	private int nbrPeer; 
	
	public overlayPeer(){
		nbrPeer++; 
		peerID = 0; 
		IP = ""; 
		Role = 0; 
	}

	
}
