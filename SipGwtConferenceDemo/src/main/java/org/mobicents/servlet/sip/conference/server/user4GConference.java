package org.mobicents.servlet.sip.conference.server;


//Management for conference
public class user4GConference {
	public String userURI[] = new String[100]; 
	public int userID[] = new int[100];
	public int idEnodeB[] = new int[100];
	public int nbrParticipant; 
	
	//Init for conference	
	public user4GConference(){
		nbrParticipant = 0; 
		//userURI[nbrParticipant] = ""; 
		//idEnodeB[nbrParticipant] = 0;
		for (int i = 0; i < 100; i++) {
            userURI[i] = new String();
            idEnodeB[i] = -2;  
		}

	}
	
	//Add user in conference
	public void setuser4GConference(String user, int idenodeB, int uID){
	nbrParticipant++; 
	userURI[nbrParticipant] = user; 
	idEnodeB[nbrParticipant] = idenodeB;		
	userID[nbrParticipant] = uID; 
	}
	
	
	//Delete User in conference
	public void deleteUser4Gconference(int i){
		if (i==nbrParticipant){
			userURI[i] =""; 
			idEnodeB[i] = -1 ;// -1 - in Overlay, i - in enodeB i  
			userID[i] =  0 ;
		} else {
			for (int j = i; j <= nbrParticipant - 1; j++) {
            	userURI[j] = userURI[j+1];
            	idEnodeB[j] = idEnodeB[j + 1];
            	userID[j] = userID[j+1]; 
			}
		}
		nbrParticipant--;
	}
	
	//Get index user from idenodeB 
	public int getuserfromIDenodeB(int idenodeB){
		for (int i=1;i<nbrParticipant+1; i++){
			if (idenodeB == idEnodeB[i]){				
				return i; 
			}			
		}		
		return -1; 

	}
	
	//Get index user from ID user
	public int getuserfromID(int id){
		for (int i=1;i<nbrParticipant+1; i++){
			if (id == userID[i]){				
				return i;
			}			
		}		
		return 0; 	 
	}
	//Get index user from URI 
	public int getuserfromURI(String uri){
		for (int i=1;i<nbrParticipant+1; i++){
			if (uri.contains(userURI[i])){				
				return i;
			}			
		}		
		return 0; 	 
	}
	//Get ID enodeB from ID user
	public int getenodeBfromID(int id){
		for (int i=1;i<nbrParticipant+1; i++){
			if (id == userID[i]){				
				return idEnodeB[i]; 
			}			
		}		
		return -1; 
	}
	//Get ID enode B from URI user
	public int getenodeBfromuri(String uri){
		for (int i=1;i<nbrParticipant+1; i++){
			if (uri.contains(userURI[i])){				
				return idEnodeB[i]; 
			}			
		}		
		return -1; 
	}	
}
