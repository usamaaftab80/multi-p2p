1. Simulation world: (Server)
su -
cd /home/admin/sim/OverSim-20090908/simulations/realworld
./root\_setup-world
NOTE:
- wait until "tun0 up done" without errors
- make sure ip\_forward = 1

2. External Wimax terminal
cd /home/admin/origine\_oversim/OverSim-20090908/simulations/realworld
../../src/OverSim -f niceapp.ini

Windows:
cd ../../singlehost/OverSim-20090908/simulations/realworld
./setup\_tunnel.sh
(wait for peering done with remote host)
./addroute.sh
(wait until "Hoang global object initttt done" on Server to make sure that SingleHost will receive the first NICE\_RP\_NOTIFY msg)
../../src/OverSim -f niceapp.ini -u Cmdenv