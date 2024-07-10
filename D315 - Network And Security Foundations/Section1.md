# Section 1 - Networking Concepts

A network is a collection of devices and their infrastructure in order to share data and resources.

## Network Devices

**Hub** - "Dumb" device that sends traffic to all devices on network on Physical OSI layer. Old, outdated. Still used example: USB hub.

**Switch** - "Smart" device that uses MAC addresses to forward traffic directly to and from the sender/receiver respectively. Operates on Data Link layer of OSI model. There are also Layer 3/Multi-layer Switches that can handle routing duties.

**Router** - A point of connection between two or more networks that forwards data packets. Operates on Network layer of OSI.

**Access Point** - Normally used to connect a wireless device to a wired LAN. Strictly acts a bridge between different physical connections in a network. At Data Link layer of OSI.

## Network Topologies

**Protocol** - Set of rules for accessing and using network

**Topology** - Network architecture used to interconnect equipment

### Topologies

**Bus** = Network data carried over common data link, normally one cable with terminations at each end and data only flowing one way. Devices are connected in a line and have to wait their "turn". Half duplex. No switches or routers.

**Token Ring** - Daisy changed ring that passes data tokens to each device. Allows devices to gain control of network at fixed time intervals.

**Star Topology** - Modern and most used currently. Logically connected devices to hub or switch usually using UTP cable that allows communication in a star shape. Full duplex. One con is a "Single Point of Failure" meaning a failed hub or switch can stop communication between devices connected to that network. 

**Mesh Topology** - Offers redundancy via interconnected devices  that allow multiple paths for data transfer. Expensive. For large organizations.