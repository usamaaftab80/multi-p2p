#!/bin/bash

# script only runs on Linux

modprobe tun
../../src/OverSim -f enodeb.ini
#../../src/OverSim -f realdhtworld.ini
