# Introduction #

Log for run Wimax test
1.Prepare client and server
Server may run as OpenIMS, Overlay server, enodeB server and Application server Mobicents
Client run Sipp with scenarios

2.Server
a) Run OpenIMS
Go to directory : /opt/OpenIMSCore to run PCSCF, SCSCF, ICSCF and FhoSS
sudo ./pcscf.sh
sudo ./scscf.sh
sudo ./icscf.sh
Go to opt/OpenIMSCore/FHoSS/deploy/ to run : ./startup.sh

b) Run Application Server Mobicents
+ To run scenario 1 – MCU, it may use Mobicents Sip Server 5.xx :
- Change name directory : MSS-5xx ---> MSS
- Run Application Server :  Go to /opt/Mobicents/MSS/bin/ and run ./run.sh -b [machine](IP.md)
- Run Media Server : Go to /opt/Mobicents/MSS/mobicents-media-server/bin and run ./run.sh -b [machine](IP.md)
+ To run scenario 1 – MCU, it may use Mobicents Sip Server 5.xx :
- Change name directory : MSS-4xx ---> MSS
- Run Application Server :  Go to /opt/Mobicents/MSS/bin/ and run ./run.sh -b [machine](IP.md)

c)Run Overlay Server (Inet\_Oversim\_server) : For Scenario 2 and Scenario 3
+ Go to directory : /home/tuan/sim/inet\_oversim\_server/OverSim-20100526/simulations/realworld
+ To modify the file : add\_static\_route.sh ---> change IP address
+ Run: cd OverSim/simulations/realworld
> sudo ./add\_static\_route.sh
> sudo ./root\_setup-world.sh
> d) Run EnodeB (Inet+Oversim eNodeB) :
+ Go to directory : /home/tuan/sim/Oversim\_eNodeB/simulations
+ Run eNodeB1, go to directory :  /home/tuan/sim/Oversim\_eNodeB/simulations/enodeb\_1 ---> modify file add\_static\_route.sh : change IP address  ---> Run sudo ./root\_setup-enodeb.sh
+ Run eNodeB2, go to directory :  /home/tuan/sim/Oversim\_eNodeB/simulations/enodeb\_2 ---> modify file add\_static\_route.sh : change IP address  ---> Run sudo ./root\_setup-enodeb.sh
3.Client
+ Go to directory : /opt/sipp/ to copy file install sipp-win32-2008-09-26.exe and scenario files : for 3 scenarios.
+ To run sipp in Windows : sipp.exe -sf join\_leave.xml -inf database.csv [remote](IP.md):4060 -s sip-servlets-conference -i [local](IP.md) -trace\_err -m $1 -t un