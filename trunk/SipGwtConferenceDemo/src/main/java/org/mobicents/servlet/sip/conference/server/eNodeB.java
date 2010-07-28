package org.mobicents.servlet.sip.conference.server;

public class eNodeB {
	public int ID; // eNodeB ID 
	public String eNodeBURI; // enodeB URI 
	public Participant user[] = new Participant[10];
	public int nbrParticipant; 
	public String ipeNodeB; 
	public String eNodeB_Port;
	
	public eNodeB () {
		ID = 0; 
		eNodeBURI =""; 
		nbrParticipant = 0;
		for (int i = 0; i < 10; i++) {
            user[i] = new Participant();
		}
		ipeNodeB = "";
		eNodeB_Port="";
	}
	public eNodeB geteNodeB(){
		eNodeB tmp = new eNodeB();
		tmp.ID = this.ID; 
		tmp.eNodeBURI = this.eNodeBURI;
	    tmp.ipeNodeB = this.ipeNodeB; 
	    tmp.eNodeB_Port = this.eNodeB_Port; 
		return tmp; 
	}
	
	public void seteNodeB (int ID, String eNodeBURI, String ipeNodeB, String eNodeB_Port){ 
		this.ID = ID; 
		this.eNodeBURI = eNodeBURI; 
		this.ipeNodeB = ipeNodeB; 
		this.eNodeB_Port = eNodeB_Port; 
	}
	
	public void addParticipanteNodeB(Participant par){
		nbrParticipant++;
		user[nbrParticipant].ID = par.ID; 
		user[nbrParticipant].userURI = par.userURI; 
		user[nbrParticipant].status = par.status; 
		user[nbrParticipant].role = par.role;
	}
	
	public void deleteParticipantenodeB(Participant par){
		for (int i = 1; i <= nbrParticipant; i++) {
            if ((par.ID == user[i].ID) && (par.userURI == user[i].userURI)) {
                    user[i].deleteParticipant(par);
                    for (int j = i; j <= nbrParticipant - 1; j++) {
                            user[j].ID = user[j + 1].ID;
                            user[j].userURI = user[j + 1].userURI;
                    }
            }
		}
		nbrParticipant--;
		
	}
}
