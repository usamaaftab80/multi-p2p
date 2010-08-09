#!/bin/bash

ifconfig tun2 10.0.0.1 netmask 255.0.0.0 up

route add -net 11.0.0.0 netmask 255.0.0.0 dev tun2
route add -net 12.0.0.0 netmask 255.0.0.0 dev tun2
route add -net 13.0.0.0 netmask 255.0.0.0 dev tun2
route add -net 14.0.0.0 netmask 255.0.0.0 dev tun2
route add -net 15.0.0.0 netmask 255.0.0.0 dev tun2
route add -net 16.0.0.0 netmask 255.0.0.0 dev tun2
route add -net 17.0.0.0 netmask 255.0.0.0 dev tun2
route add -net 18.0.0.0 netmask 255.0.0.0 dev tun2
route add -net 19.0.0.0 netmask 255.0.0.0 dev tun2
route add -net 20.0.0.0 netmask 255.0.0.0 dev tun2

