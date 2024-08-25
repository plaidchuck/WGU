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
