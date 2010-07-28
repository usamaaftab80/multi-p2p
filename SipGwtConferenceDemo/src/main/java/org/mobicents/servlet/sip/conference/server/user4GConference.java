package org.mobicents.servlet.sip.conference.server;

public class user4GConference {
	public String userURI[] = new String[10]; 
	public int idEnodeB[] = new int[10];
	public int nbrParticipant; 
	
	public user4GConference(){
		nbrParticipant = 0; 
		//userURI[nbrParticipant] = ""; 
		//idEnodeB[nbrParticipant] = 0;
		for (int i = 0; i < 10; i++) {
            userURI[i] = new String();
            idEnodeB[i] = 0;  
		}

	}
	public void setuser4GConference(String user, int idenodeB){
	nbrParticipant++; 
	userURI[nbrParticipant] = user; 
	idEnodeB[nbrParticipant] = idenodeB;		
	}
	
	public void deleteUser4Gconference(int i){
		if (i==nbrParticipant){
			userURI[i] =""; 
			idEnodeB[i] = 0 ; 
		} else {
			for (int j = i; j <= nbrParticipant - 1; j++) {
            	userURI[j] = userURI[j+1];
            	idEnodeB[j] = idEnodeB[j + 1];
			}
		}
		nbrParticipant--;
		
	}
}
