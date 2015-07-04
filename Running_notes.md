# 1. NICE streaming application test #

## Requirements: ##

  * [OMNeT++ 4.0p1 (source + IDE, tgz)](http://www.omnetpp.org/omnetpp/doc_details/2198-omnet-40p1-source--ide-tgz)
  * OverSim-2009: svn/trunk/OverSim
  * INET-2009: svn/trunk/INET

## Installation: ##

  * Download & untar [OverSim-20090908.tgz](http://www.oversim.org/chrome/site/OverSim-20090908.tgz) & [INET-OverSim-20090317.tgz](http://www.oversim.org/chrome/site/INET-OverSim-20090317.tgz)
  * Copy and replace code from SVN into extracted folders
  * Build all in Omnetpp IDE

## Configuration file: _omnetpp.ini_ ##

  * Modify _.hoang\_use\_cost=true_ (or false) to run with (or without) new cost function

  * To customize the cost function's variables (delay only, bandwidth only, delay+bandwidth) take a look at _Nice::cost()_ in _OverSim-20090908/src/overlay/Nice/Nice.cc_

  * _.overlayTerminalNumber = 16, 32, 64 … 1024_

## Run: ##

```
cd OverSim-20090908/simulations
../src/OverSim -u Cmdenv -c NiceTestAppGTITM
```

# 2. Tests with an outside wimax singleHost #

## Requirements: ##

  * OpenVPN
  * [OMNeT++ 4.1 (source + IDE, tgz)](http://omnetpp.org/omnetpp/doc_details/2217-omnet-41-source--ide-tgz)

MUST setup OverSim on **two sides**: Server and SingleHost (on two different hosts)

## Installation: ##

  * Server: checkout _svn/trunk/OverSim\_server\_2010_ and _svn/trunk/inet2010_ in the omnetpp4.1 IDE.

  * SingleHost: checkout _svn/trunk/OverSim\_singlehost\_2010_ and _svn/trunk/inet2010_

## Configuration files: ##

  * Server: _OverSim/simulations/realworld/world.ini_

  * SingleHost: _OverSim/simulations/realworld/niceapp.ini_

## Run: ##

  1. Setup OpenVPN tunnel between Server and SingleHost:

> Server:
```
  sudo openvpn openvpn_server.txt
```

> SingleHost:
```
  sudo openvpn openvpn_client.txt
  sudo ./add_static_route_singlehost.sh
```

> 2. Run at SingleHost first
```
  cd OverSim/simulations/realworld/
  ./run.sh
```

> 3. Then start Server:
```
  cd OverSim/simulations/realworld/
  sudo ./root_setup-world.sh
```

## Notes: ##

Must setup openvpn tunnel first of all to create an interface 1.1.1.2 for SingleHost and to resolve the problem of public/private IP address range.


# 3. Support IMS system #

## Requirements: ##
osip , eXosip2

Run on 1 simulation server and many SingleHosts.

Common INET: _svn/trunk/inet\_ims_

Separate OverSim for each side (server, single hosts)

### Overlay Server: ###

Checkout: _svn/trunk/OverSim\_server\_2010_

### EnodeB ###

Checkout: _svn/trunk/eNodeB_

### Independent Single UEs ###

Checkout: _svn/trunk/OverSim\_singlehost\_UE_

## Run: ##

### Scenario 2 ###
1. Start 2 eNodeBs (on the pc which hosts 2 enodebs)
```
cd OverSim/simulations/realworld
sudo ./add_static_route.sh
sudo ./run_2_enodeb.sh
```
See more detail in _run\_2\_enodeb.sh_ to run enodebs on different computers.

Terminate:
```
sudo killall OverSim
sudo ./del_static_route.sh
```

2. Start server (on server side)
```
cd OverSim/simulations/realworld
sudo ./add_static_route.sh
sudo ./root_setup-world.sh
```
Terminate: Ctrl+C

3. Run SIPp client

### Scenario 3 ###
1. Start singleHost\*s**(on the pc that hosts all of them)
```
cd OverSim/simulations/realworld
sudo ./add_static_route.sh
sudo ./setup_4_interface.sh
sudo ./run_4_singlehost.sh
```
setup\_4\_interface.sh to create 4 sub-interface of eth0 with 4 different IP addresses.**

2. Start server
```
cd OverSim/simulations/realworld
sudo ./add_static_route.sh
sudo ./root_setup-world.sh
```

## Notes ##
Must run _add\_static\_route.sh_ to make sure that OverSim packets are routed directly and correctly between different sides (server, enodeb, singlehosts)