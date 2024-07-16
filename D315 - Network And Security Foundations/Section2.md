# Section 2 - Intro to Network Security

## Key Terms

**Asset** - What is trying to be protected: person, device, locations  
**Vulnerability** - Weakness or flaw that can be exploited  
**Exploit** A program, code, mechanism designed to to take advantage of flaw or vulnerability  
**Threat** - Something or someone that can exploit the vulnerability, the actor  
**Attack** - Instance or action of the actor  
**Attack Vector** - Path or method the attacker uses against the target  
**Risk** - Potential of threat or exploit, what will aftermath of attack be   
**SpecOps** - Security Options discipline within IT tasked with protecting assets and reducing risk  

## Vulnerabilities  

The three states of data are at rest, in use, and in transit. At rest an in transit are when prevention can be made.  

### Passwords / Poor user security practices 

Weak or simple: Easy to guess(common), or use of brute force(attempts every combination of letters)/dictionary attack software to guess list of common password, users writing passwords down and keeping them on site  

Mitigation is to require stronger passwords, i.e. using longer length, more complex that require combinations of upper/lower case, numbers, and symbols. Also limiting the number of password attempts.  Forcing changing of passwords during regular periods and also making sure previous passwords aren't used too often.  

### Bring Your Own Device

**Malware** - Cannot control what users may download on personal phone via email, text, downloads etc.  

Mitigation is requiring approved anti-malware software. Also companies can require Mobile Device Management(MDM) software, which will allow IT to have some control over the device to try to enforce security standards.  

### Unpatched Software  

Unpatched software can contain vulnerabilities that have already been fixed by more recent updates. Extends to firmware, OS, individual applications.  

### Zero-Day  

An exploit or vulnerability that is not known yet(e.g. software recently released), therefore current anti-virus/malware cannot find it.  

**Intrusion Prevention System(IPS)** - Can be configured to find and block suspicious code patterns to try and analyze zero-day exploits.  

### Physical Security  

Any type of security measures that prevent a threat to get hands-on with equipment that processes or holds sensitive data.  

### Misconfigured Firewall Rules

Firewalls filter incoming/outcoming traffic based on set of rules. Misconfigured or incorrect order rules can cause vulnerabilities.  

### Insecure/Outdated Protocols  

Examples inclue insecure protocols like HTTP, FTP, SSL, IMAP, etc.

### Incorrect permissions/rights  

Admin priviledges vs standard user, permissions access to resources, and rights that allow modifying some system or hardware.  

### Advanced Persistent Threats

Some type of threat, software/malware that remains dormant and undetected in a network, that can become active and cause damage.

## Penetration Testing Teams / Attacker Types

**Red Team** - "Offensive" team trying to compromise any security measures.

**Blue Team** - "Defensive" team trying to defend against security attacks from Red.  

**White Team** - Observation team, sets rules and tools that teams can use.  

**Purple Team** - Red and Blue team collaboration and debrief/after action report. Used to teach and cross-train each team for both defense and offense.  

### Hacker Types  

**White Hat** - IT pros that specialize in pen testing and ethical hacking in order to consult and help an organization with security.  

**Black Hat** - Attackers with malicious intent when compromising systems, in order to gain some monetary/enterainment/credibility goal.  

**Gray Hat** - Not necessarily malicious intent and may attempt to perform white hat duties, but they are not authorized by companies to due this generally so their actions are technically illegal. May be amateurs and therefore can cause unintended damage and leaks.  

**"Script Kiddies"** - Hack for curiousity or entertainment, have no formal training and general use pre-made scripts or tools.

### Insider Threat  

Disgruntled employee, current employee accidentally introduces exploits.  

**Least Privledge Principal** - Access limits and rights to the minimum level for an employees job or duties.  Confidentiality issue on CIA triad.  

### Nation States  

Actors, sponsored or otherwise with malicious intent for industrial espionage, IP theft, infrastructure damage, or poltiical destability.  

### Hacktivist  

A hacker that usually hacks a government system in protest of some new policy or entity.    
## Common threats and attacks

**Malware** - A variety of malicious software used to destroy, ransom, steal, or access data. Includes spwyware, ransomware, adware, worms, trojans, viruses, and botnets.  

**Phishing** - An SEO attack using emails with malicious links to dangerous sites or software  

**Pharming** - Redirecting traffic to a malicious website usually by changing or spoofing DNS information.  

**ARP Poisoning/Spoofing** - Using spoofed ARP messages on a LAN in order to direct traffic to a malicious MAC address, e.g. spoofing the ARP/MAC of a default gateway to capture any outgoing data.  

**Wiretapping** - Physicial/wifi packet sniff in order to listen to activity and gain confidential information  

**Port Scanning** - Using tools (nmap) to find available open hosts and services that can be exploited  

**SQL Injection/ Buffer Overflow** - Through web, inputting SQL commands and executables to gain unintended access and control. Mitigated through better software using input validation. 

**Spoofing** - Impersonating another person or device to receive confidential information. Commonly used in man-in-the-middle attacks, where a spoof gets between two legitimate entities in order to obtain confidential information.

**Denial-Of-Service** - Shutting or slowing down a service by sending junk work to the network. "Ping of death" attack uses buffer overflow by sending bad ICMP(ping) packets. Networks can also be flooded by pings from a bad source address or from multiple legitimate servers through a smurf attack.  

**VLan Hopping**  - Using swicthes VLAN capabilities to access other VLANs and take control over a large part of the network.  

**Deauthentication attack** - DoS attack that makes an access point drop the MAC address of a user using deauthentication frames. Mitigated by newest WPA3 that does not send MAC address information in the clear.

**Social Engineering** - Taking advantage of human behavior in order to bypass technical security measures.  

**Bluesnarfing/bluejacking** - Packet sniffing or hacking bluetooth devices.  

**Fake Access** - "Evil twin", attacker makes a fake access point that someone inadvertently connects to  

**Rogue Access Point** - May not be necessarily malicious, but is the case of an unauthorized access point being connected to a network which could compromise security later  

## Risk Mitigation  

Develop response plans before attack happens, using pentesting, fire drills etc.  Run proactive detection software and log review.  Safeguards are for gaps or weaknesses in security, and countermeasures address specific threats or attacks.

**Honeypot** - Device used as a decoy to distract attacker or give them access to useless information  

**Device Hardening** - Making devices as secure as they can be, e.g. not using default passwords, firmware/software updates  

**User Awareness Training** - Training employees on SEO attacks, best practices for phishing/malware avoidance.  

### Handling Risks  

**Reduce** - Reduce/mitigate by any means available: admin/technical/physical.  

**Transference** - Transfer some risk to another entity e.g. insurance.  

**Acceptance** - Allowing risk as cost of reducing is greater than what loss would be.  

**Avoidance** - Eliminating risk, e.g. retiring unpatchable or old software/servers that can not longer be made compliant.  Deciding not to use certain software or hardware.  

## CIA  

### Confidentiality  

Ensuring data is hidden, ideally encrypted in some way, and only viewed and used by the intended or allowed recipient.  Violations include packet sniffing, information left in the clear, encryption breaking, or SEO/human error.  

### Integrity  

Accuracy and completeness of data, and assurance that data has not been modified or omitted. Using hashes and checksums to verify data is the same as when it was sent.  

### Availability  

Data is available when it is needed. Enforced through redundancy. Violations involve DoS attacks, phyiscal damage and outtages.  Mitigated by redundancy or load balancing.  

## AAA  

### Authentication  

Proving someone is who they say there are, e.g. password/username. Can have multi factor authentication, which has to be balanced by practicality and cost. Federated networks can use authentication through third parties(facebook, linkedin, etc.). Single Sign On to allow one authentication for access to various services in the organization.  

- Biometrics  
- Physical object: smart card, dongle, USB token, users mobile phone  
- Physical Location, GPS, IP address  
- Signatures, typing technique  

### Authorization  

Based on the previous authentication, what access does the user have  

### Accounting  

Log of users interactions, login time, data sent and received, logout time, resources used  

