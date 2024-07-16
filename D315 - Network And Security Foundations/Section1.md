# Section 1 - Networking Concepts

[Topologies](#topologies)  
[OSI Model](#osi-model)    
[Network Commands](#network-commands)    
[Cloud Computing](#cloud-computing)  

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

**Bus** - Network data carried over common data link, normally one cable with terminations at each end and data only flowing one way. Devices are connected in a line and have to wait their "turn". Half duplex. No switches or routers.

**Token Ring** - Daisy changed ring that passes data tokens to each device. Allows devices to gain control of network at fixed time intervals.

**Star Topology** - Modern and most used currently. Logically connected devices to hub or switch usually using UTP cable that allows communication in a star shape. Full duplex. One con is a "Single Point of Failure" meaning a failed hub or switch can stop communication between devices connected to that network. 

**Mesh Topology** - Offers redundancy via interconnected devices  that allow multiple paths for data transfer. Expensive. For large organizations.

## Network Architecture 

**Peer to Peer** - Decentralized where any computer/host can be a client/server, depending on what is required to share data. Does not scale well. Much simpler setup.

**Client/Server** - Classic set up with a central server that processes client requests and resources and also provides top down directory control of the clients. Has points of failure if the server systems go down.

**Infrastructure** - Generally wireless with multiple WAPs

## Transmission Media Types and Connectors 

**Coaxial Cable** - Braided sheath around metal inner conductor. Used with cable and now broadband internet. Using RG-6 connector.

**UTP/STP** - Unshielded and shielded twisted copper. 100m up to max speed Cat 6A.  Cat5 - 100MBps Cat 5e- 1 GBit

**Fiber Optic** - Single mode: Single signal over longer distances, multi mode: multi signals over shorter distance. Using SC, LC, ST connectors.

**WiFi** -
802.11a 54 Mbps 5Ghz  
b 11 MBps 2.4GHz  
g 54Mbps 2.4 GHz  
n 600 MBps both  
ac 1300Mbps 5 Ghz  
ax 9600Mbps both  


## Network Types 

**Storage Area Network (SAN)** High speed network that separates storage devices into their own LAN area for better security and speed. Provides storage that appears locally attached to end user.  

## Network Commands 

Tracert/Traceroute/tracepath - Windows/Linux - Shows hop to device and between networks to reach IP destination

ipconfig/ifconfig/ip - Windows/Linux Shows IP configuration for network device(IP address, gateway, DHCP, subnet mask)

nslookup/dig Windows/Linux - Translates DNS Name to IP address and vice versa

arp - Address Resolution Protocol - MAC Address to IP tables

netstat - Shows active connections based on port and service

Nmap - Probes IP addresses and reports on open/closed ports and services.

route - Shows routing table information and how the machine accesses other networks via the router. Can be edited/updated.

ftp/tftp - tftp using UDP

whois - Linux Only - Shows information about domain registration

tcpdump - Linux only - Packet sniffer application

finger - Linux - Provides information for logged in user

scp - Linux - Secure Copy. Secure file transfer

cat - Allows to create files, view contents or concatenate filers and redirect output

## OSI Model

Flow of data through model
Encapsulation/decapsulation. Application layers generate requests, perform encryption/compression, establishes connections (SSL)

Transport breaks data into into segments and determines what service the segment is for

Network layer adds packet header information, source and destination IP address

Data Link adds frame header for destination MAC addresses information

Physical layer sends data as signals, light, etc

## Virtualization 

**Type 1 Hypervisor** - High level of performance, VM at hardware level "Bare metal" that is dedicated to running VMs without OS

**Type 2 Hypervisor** - Software level VM, lower performance as it goes through the software on an OS

## Cloud Computing

**On-Premises** - Traditional physical facility with VMs, from hardware to application to data, no cloud features

**IaaS** - Third party provides provides VM, storage, servers, physical equipment, and security. 

**PaaS** - Third party provides IaaS and OS/middleware, ideal for developers who want to create platforms with already developed tools and developing environment

**SaaS** - Third party provides IaaS, PaaS, and actual application/software that is used. GMail, Office 365

### Clouds

**Public** - Cloud services provided to the public by third party provider. Multi customers share the infrastructure. Examples are AWS, Azure

**Private** - Single organization non-shared cloud infrastructure. An example is a business with multiple office locations having one internal company cloud they share.

**Hybird** - A mix of private and outsourced public cloud environments, limited access. Some parts are still private on premises. 

**Comunity** - A collaborative cloud limiting access to a certain group of interests with some common need. An example would be government law enforcement agencies sharing a cloud for information purposes.
