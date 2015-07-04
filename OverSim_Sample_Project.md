# Introduction #

This wiki page is the note for difficulties and achievements in running a sample OverSim simulation.

In this sample project, the PING program is simulated.

A node will send a message to an arbitrary node. Then it waits for a number of seconds before sending another message.

A receiving node will reply the ping message through UDP and overlay networks.

The simulation is continued until the simulation is ended.

# Details #

The OverSimDevelop page gives detailed instructions about how to create a simple sample project. However, the given source code on this website has been simplified and some pre-processing code lines such as include, import, etc have not been provided. It causes problems during compilation for newbie. However, users can download the sample codes
http://www.oversim.org/attachment/wiki/OverSimDevelop/MyOverlay.tgz

In this sample application, an simple overlay has been developed. This overlay use IP for mapping directly ( forexample, node 5 means its IP address 10.0.0.5). When a message is sent between node A and node B, it will be carried through all nodes between these two terminals.

## Strurture of MyApplication ##

```

class MyApplication : public BaseApp
{
    // module parameters
    simtime_t sendPeriod;     // we'll store the "sendPeriod" parameter here
    int numToSend;            // we'll store the "numToSend" parameter here
    int largestKey;           // we'll store the "largestKey" parameter here

    // statistics
    int numSent;              //number of packets sent
    int numReceived;          //number of packets received

    // our timer
    cMessage *timerMsg;

    // application routines
    void initializeApp(int stage);             // called when the module is being created
    void finishApp();                  // called when the module is about to be destroyed
    void handleTimerEvent(cMessage* msg);      // called when we received a timer message
    // called when we receive a message from the overlay
    void deliver(OverlayKey& key, cMessage* msg);
    void handleUDPMessage(cMessage* msg);      // called when we receive a UDP message
};
```
(http://www.oversim.org/wiki/OverSimDevelop)

## Structure of MyOverlay ##

```
class MyOverlay : public BaseOverlay 
{
  public:
    // Routing parameters
    int myKey;               // our overlay key
    NodeHandle prevNode;     // next node in chain
    NodeHandle nextNode;     // previous node in chain

    //module parameters
    double dropChance;       // we'll store the "dropChance" parameter here

    // statistics
    int numDropped;          // how many packets have we dropped?

    // overlay routines
    void initializeOverlay(int stage);              // called when the overlay is being initialized
    void setOwnNodeID();                            // (optional) called to set the key of this node (random otherwise)
    void joinOverlay();                             // called when the node is ready to join the overlay
    void finishOverlay();                           // called when the module is about to be destroyed

    // obligatory: called when we need the next hop to route a packet to the given key
    NodeVector* findNode(const OverlayKey& key,     // key to route to
                         int numRedundantNodes,     // next hop candidates to return if we're not responsible for "key"
                         int numSiblings,           // how many siblings to return if we're responsible for "key"
                         BaseOverlayMessage* msg);  // message being routed

    // obligatory: In general, called when we need to know whether "node" is amongst numSiblings closest nodes to "key".
    // But normally it is called with "node" set to "thisNode", and asking whether we are responsible for "key"
    bool isSiblingFor(const NodeHandle& node,       // which node (usually thisNode) we're referring to
                      const OverlayKey& key,        // key in question
                      int numSiblings,              // how many siblings we're querying about
                      bool* err);                   // set to false when we couldn't determine the range

    // obligatory: Set the maximum number of siblings that can be queried about in isSiblingFor(usually 1)
    int getMaxNumSiblings();

    // obligatory: Set the maximum number of redundant nodes that can be queried about in isSiblingFor (usually 1)
    int getMaxNumRedundantNodes();

};
```
(http://www.oversim.org/wiki/OverSimDevelop)


( This node will be continuously updated )