Problems:

**//Done**

1. IP address ranges -> OK

Simulate Network: 10.0.0.0/8

Real Single Host: get the IP of the network interface (eth0, wlan0) to join overlay

> - public: 157.159.16.186

> - private in LAN: 192.168.1.10 -> tunnel OpenVPN

NOTE: must "add route" to get host known how to go to 10.0.0.0/8

2. Ports:

--> firewall policy: wimax BS 12356 UDP opened for OpenVPN -> OK

3. Global Statistic Object at different Oversim instances on different hosts

-> Stand at host to statistic, export to file -> OK

4. Rendez-vous Point (RP) in NICE. -> OK

Server: add a new NICE msg NICE\_RP\_NOTIFY to inform SingleHost immediately when RP changed

SingleHost: update RP by receiving NICE\_RP\_NOTIFY from server

5. Loop video sending to assure that all nodes send/receive each other -> OK

Finish time : manually after all node sent done

6. Bug fixed: Message received from external host has senderID = 0 ? (should be 1111) => remember to set isSender = true;


7. Physical hop-count -> OK

get TTL real Router + TTL Inet

received ttl < 0 <- Reason: defaultTTL of external network = 64, internal = 32 -> +32 for packets received from external node

8. End-to-end Delay

Time stamp: msg->getCreationTime() is resetted at each side, follow the simTime() of each host.

get delay on wimax link by PING PONG at initTime between singlehost and RP

adjust e2eDelay by adding the PINGPONG time

9. Summary all statistic files follow formulas

**//WiP**

1. Get bandwidth, delay of real wimax link
(for the cost function)
-> 3rdParty tool ? -> 0.25 day


**//Bugs**