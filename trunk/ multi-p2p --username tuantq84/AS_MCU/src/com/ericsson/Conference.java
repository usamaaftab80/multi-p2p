package com.ericsson;

public class Conference {
	public int nbrParticipant=0;
	public int idChairman=0;
	public Participant user[] = new Participant[10];

	public Conference() {
		nbrParticipant = 0;
		idChairman = 0;
		for (int i = 0; i < 10; i++) {
			user[i] = new Participant();
		}
	}

	public void getConference(){
		
	}
	
	public void setConference(int nbrParticipant, int idChairman, Participant user[]){
		this.nbrParticipant = nbrParticipant;
		this.idChairman = idChairman;
		this.user = user; 
	}
	
	public void addUser(int ID, String Name) {
		nbrParticipant++;
		user[nbrParticipant].addParticipant(ID, Name);
	}

	public void deleteUser(Participant Obj) {
		for (int i = 1; i <= nbrParticipant; i++) {
			if ((Obj.ID == user[i].ID) && (Obj.userURI == user[i].userURI)) {
				user[i].deleteParticipant(Obj);
				for (int j = i; j <= nbrParticipant - 1; j++) {
					user[j].ID = user[j + 1].ID;
					user[j].userURI = user[j + 1].userURI;
				}
			}
		}
		nbrParticipant--;
	}
	public void changeChairman(int ID){
		idChairman = ID;
	}	
	
	
}
