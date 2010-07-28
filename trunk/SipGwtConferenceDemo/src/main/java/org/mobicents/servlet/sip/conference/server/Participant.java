package org.mobicents.servlet.sip.conference.server;

public class Participant {
	int ID; // Participant ID 
    String userURI; // Name participant
    int status; // Participant status = 0 - Normal; 1 - pause
    int role; // role = 0 - sender/forwarder; 1 - receiver 
    //String portMedia; //Port Media 
    public Participant(){
            ID = 0;
            userURI = "";   
            status = 0;
            role = 0;
    }
    
    public Participant getParticipant() {
            Participant tmp = new Participant(); 
            tmp.ID = this.ID;
            tmp.userURI = this.userURI;
            tmp.status = this.status;
            tmp.role = this.role; 
            return tmp;             
    }
    
    public void setParticipant(int ID, String Name, int status, int role){
            this.ID = ID; 
            this.userURI = Name; 
            this.status = status; 
            this.role = role; 
    }
    public  void deleteParticipant(Participant par){
            par.ID = 0; 
            par.userURI = "";
            par.status = 0; 
            par.role = 0;
    }
}
