#!/bin/bash

ifconfig tun0 50.0.0.1 netmask 255.0.0.0 up

route add -net 50.0.0.0/8 dev tun0
route add -net 51.0.0.0/8 dev tun0
route add -net 52.0.0.0/8 dev tun0
route add -net 53.0.0.0/8 dev tun0
route add -net 54.0.0.0/8 dev tun0
route add -net 55.0.0.0/8 dev tun0
route add -net 56.0.0.0/8 dev tun0
route add -net 57.0.0.0/8 dev tun0
route add -net 58.0.0.0/8 dev tun0
route add -net 59.0.0.0/8 dev tun0

