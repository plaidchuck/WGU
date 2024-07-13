# Section 1 - Networking Concepts

A network is a collection of devices and their infrastructure in order to share data and resources.

## Network Devices

**Hub** - "Dumb" device that sends traffic to all devices on network on Physical OSI layer. Old, outdated. Still used example: USB hub.

**Switch** - "Smart" device that uses MAC addresses to forward traffic directly to and from the sender/receiver respectively. Operates on Data Link layer of OSI model. There are also Layer 3/Multi-layer Switches that can handle routing duties.

**Router** - A point of connection between two or more networks that forwards data packets. Operates on Network layer of OSI.

**Access Point** - Normally used to connect a wireless device to a wired LAN. Acts a bridge between different physical connections in a network. At Data Link layer of OSI using MAC addresses.

**Repeater** - Extends or re-energizing a signal via wire

## Network Topologies

**Protocol** - Set of rules for accessing and using network i.e. Ethernet

**Topology** - Network architecture used to interconnect equipment. Logical topology describes how the data flows and not necessarily the actual physical location of componenents.

### Topologies

**Bus** = Network data carried over common data link, normally one cable with terminations at each end and data only flowing one way. Devices are connected in a line and have to wait their "turn". Half duplex. No switches or routers.

**Token Ring** - Daisy changed ring that passes data tokens to each device. Allows devices to gain control of network at fixed time intervals.

**Star Topology** - Modern and most used currently. Logically connected devices to hub or switch usually using UTP cable that allows communication in a star shape. Full duplex. One con is a "Single Point of Failure" meaning a failed hub or switch can stop communication between devices connected to that network. 

**Mesh Topology** - Offers redundancy via interconnected devices  that allow multiple paths for data transfer. Expensive. For large organizations.

## Network Architecture ##

**Peer to Peer** - Decentralized where any computer/host can be a client/server, depending on what is required to share data. Does not scale well. Much simpler setup.

**Client/Server** - Classic set up with a central server that processes client requests and resources and also provides top down directory control of the clients. Has points of failure if the server systems go down.

**Infrastructure** - Generally wireless with multiple WAPs

## Transmission Media Types and Connectors ##

**Coaxial Cable** - Braided sheath around metal inner conductor. Used with cable and now broadband internet. Using RG-6 connector.

**UTP/STP** - Unshielded and shielded twisted copper. 100m up to max speed Cat 6A.  Cat5 - 100MBps Cat 5e- 1 GBit

**Fiber Optic** - Single mode: Single signal over longer distances, multi mode: multi signals over shorter distance. Using SC, LC, ST connectors.


## Network Types ##

**Storage Area Network (SAN)** High speed network that separates storage devices into their own LAN area for better security and speed. Provides storage that appears locally attached to end user.  


