#!/bin/bash

# script only runs on Linux

modprobe tun
#sudo chown hoang /dev/net/tun
#sudo sh -c "echo 1 > /proc/sys/net/ipv4/ip_forward"
../../src/OverSim -f enodeb.ini
#../../src/OverSim -f enodeb.ini -u Cmdenv
#../../src/OverSim -f realdhtworld.ini
