#!/bin/bash

ifconfig tun0 10.0.0.1 netmask 255.0.0.0 up

route add -net 11.0.0.0 netmask 255.0.0.0 dev tun0
route add -net 12.0.0.0 netmask 255.0.0.0 dev tun0
route add -net 13.0.0.0 netmask 255.0.0.0 dev tun0
