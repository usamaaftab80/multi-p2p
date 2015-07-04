# Plan #

## I. Multiple UEs' representations on SingleHost eNodeB ##

**1. Plan A:** Trying scenario: 1 oversim instance of 2 peers <==connect==> 1 oversim instance of n-2 peers  --> 1 simulation of n peers

If connect ok:

- Mapping:	map UE1 - peer 1
> map UE2 - peer 2
...

- Modify NICE code on peer to communicate with UE: listen to control messages, transfer data messages ...

- Connection parameters (BW,delay) between underlays of 2 peers in oversim ???

**2. Plan B:** (if A not ok)

Construct a SingleHost overlay service which represents multiple UEs.

- Send NiceMessage with different senderAddress ?

- Handle NiceMessage from simulation server
> - control, HB: query to get info from network, then reply with UEs'IP address
> - data: transfer to destinations (UEs)

- Handle NiceMessage from UEs: send NiceMessages with indicated IP addresses to simulation server


## II. Static routing between eNodeB and simulation oversim server ##

eNodeB <==tunnel==> simulation\_network

Remember to make route in 2 ways:

- At UEs:
> route to all via eNodeB
- At eNodeB:
> route to simulation\_network via tunnel\_to\_simulation\_network
- At simulation server:
> route to UEs'network via tunnel\_to\_eNodeB