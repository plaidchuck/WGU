# Section 2 - Intro to Network Security

## Key Terms

**Asset** - What is trying to be protected: person, device, locations  
**Vulnerability** - Weakness or flaw that can be exploited  
**Exploit** A program, code, mechanism designed to to take advantage of flaw or vulnerability  
**Threat** - Something or someone that can exploit the vulnerability, the actor  
**Attack** - Instance or action of the actor  
**Risk** - Potential of threat or exploit, what will aftermath of attack be   
**SpecOps** - Security Options discipline within IT tasked with protecting assets and reducing risk  

## Vulnerabilities  

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

## Common threats and attacks

