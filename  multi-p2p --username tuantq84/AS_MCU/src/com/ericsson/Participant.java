package com.ericsson;

public class Participant {
	int ID; // Participant ID 
	String userURI; // Name participant
	
	public Participant(){
		ID = 0;
		userURI = ""; 		
	}
	
	public Participant getParticipant() {
		Participant tmp = new Participant(); 
		tmp.ID = this.ID;
		tmp.userURI = this.userURI;
		return tmp;		
	}
	
	public void addParticipant(int ID, String Name){
		this.ID = ID; 
		this.userURI = Name; 
	}
	public  void deleteParticipant(Participant par){
		par.ID = 0; 
		par.userURI = "";
	}
}
