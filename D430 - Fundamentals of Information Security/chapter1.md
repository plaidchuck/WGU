# Chapter 1 Introduction 

There is a fine line between proper security and too much or too little.  Generally the more security levels will add more cost and complexity.  Something may be so secure that it is then unusable or it strips away the value of what you are protecting.  

- **PCI DSS** Payment card industry data standards  

- **FISMA** Federal agency security standards  

### Parkerian Hexad  

Adds ***Posession of Control, Authenticity, and Utility*** to **CIA** triad.  

- **Posession** - A look at the actual physical location of the data in question.  E.g., encrypted data being stolen is a possession issue for the time being rather than confidentiality one.  Can better describe actual incidents.  

- **Authenticity** - Describes whether data is from a proper owner or creator.  Could describe situations like a spoofed email address where the sender is not who you think it is.  Also ties in with ***non-redpudiation*** which can show proof that someone has taken an action even if they later deny it.  

- **Utility** - Describes how useful data can be even for someone who is not authorized to have it or use it.  E.g., stolen data that is heavily encrypted would be of low utility to a hacker.  

### Attack Types  

- **Interception** - Unauthorized access to data/resources/apps.  E.g., sniffing, scanning, man-in-the-middle, phishing  

- **Interruption** - Attacks that make assets unavailable, e.g. DoS attacks.  

- **Modification** - Unauthorized or malicious tampering with an asset that can change its integrity or availability.  

- **Fabrication** - Generating unauthorized data or processes within a system.  

### Risk Management  

This is a process of identifying what actual assets you have and how critical they are to the organization. Once complete actual threats can be identified based on the incident or attack. Vulnerabilites then check how susceptible assets are to any CIA AUP impacts.  Risk is then the conjunction of both a threat and a vulnerability, where a real impact can occur with a successful attack.

Once legitimate risks are identified, mitigation can occur which can be classified as ***physical, logical, and administrative***  
When an incident happens, there should be a process from preparation to the attack all the way to post-incident which is a debriefing and analysis of the attack for future preparation.  

### Defense in Depth Layers and Defensive Controls  

-	**External Network**:	DMZ, VPN  
-	**Network Perimeter**:	Firewall, Proxy, Stateful/Circuit Level packet inspection  
-	**Internal Network**:	IDS/IPS, Firewalls, Audting  
-	**Host**:	Authentication, IDS/IPS, Antivrus, Logging, Hashing  
-	**Application**:	Secure by data validation, content filtering, auditing/accountability, vulnerability testing  
-	**Data**:	Secure by encryption, physical/admin access controls, Backups      


## Exercises  

1.	A vulnerability is some kind of weakness or vector in a defense that can be exploited.  A threat is some type of actor or action thawt can be done to take advantage of the vulnerability.  

2.	Logical controls: DMZ, firewall, password policy, antivirus, IDS, IPS, encryption  

3.  Utility is the part of the Parkerian Hexard that applies to how useful the data is to both the organization and even an authorized hacker  

4.	Intercetpion is an attack against condifidentiality as it implies the receipt, viewing, or exposure of the confidential data to someone not authorized to access it.  

5.	You can only be aware that you've attempted to mitigate or at least have identified potential threats, nothing can ever be completely secure.  It's better to look at where you are insecure and address/mitigate what you can.  

6.	Removing data using phyiscal data via USB: Security guards, door locks requiring badges/tokens, man traps, education against piggy backing social engineering/pretexting, passwords/authenticaiton accessing the system containing data, removing permissions to transfer data or use the USB  

7. Posession of data backups is lost, availability if the backups are needed, utility as personal and payment information is important.  The fact that the data is encrypted may mitigate risks to Confidentiality, Integrity, and Authenticity.  

8.	You don't have a risk as the threat(worm) cannot exploit a vulnerability on the web server platform that you use.  

9.	Compliance and acceptability will be impacted by users being forced to make overly complex characters as well as the ability to actually enforce any rules.  

10.	The CIA can be too restrictive such as not differentiating between lost encrypted and lost unencrypted data and how to describe the threats to each one.  The Parkerian Hexard does not make a distinction of the idea of authorized but incorrect manipulation of data.  It demands that any data remain unchanged within its model to ensure integrity.  

