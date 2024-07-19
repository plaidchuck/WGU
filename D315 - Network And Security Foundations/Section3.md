# Network Security Operations  

## Network Security Design - Policies

**Data Handling Policy** - How is data collected and encrypted(when at rest and intransit, backed up, and eventually removed when it is no longer needed.  Also defines confidentiality levels for data (authorization-who?), e.g. "public", "private", "classified", FYEO, etc.  

**Password** - Standards for password complexity, frequency of change, authentication lockout policies.

### IT Policies  

**Acceptable Use Policies** - Guidelines/Rules on using organizations systems, internet browsing at work, consequences for violation  

**Security Awareness Policies** - Sets training policy for all employees in regards to meeting security goals and best practices.  

**Asset Classification/Protection/Management Policy** - Defines how different types of assets should be protected and also sets a hierachy of importance of assets. Also sets how the assets will be managed throughout the IT domain.    

**Policy -> Standard -> Procedures -> Guidelines** Goes from formal high level principles to low level granular instructions to advice and best practices on how to follow all security goals.  

## Security Principles and Best Practices  

**BYOD** - Rules/Guidelines for an employee using their own device for work.  MDM, procedures for lost/stolen device, required software and updates  

**Privacy** - How the organization collects, uses, discloses IP and PII.  Specifies individuals' rights and how the organization complies with regulations and laws.  

### Defense in Depth  

Layered security architecure.  Not rely on one measure for complete protection.  Each defense in the layer is different in some way.  Further measures can be segmented and isolated in order to contain breaches, i.e. no "flat" networks.  

**Principle of Least Privlege** - Gives minimum amount necessary for employees to use a system. Prevents insider threats, accidental system stability issues and security breaches.  Also allows better quarantine when there is a breach and compliance with laws.  
### Complete Mediation  

Check authentication every time a system is accessed.  

**Continuous Permission Check** - Verifies user permission every time a resource is accessed.  

Also checks are put in place so employees don't use any potential loopholes to bypass security.  Also enforcing recognized best practices like automatic logouts and locked accounts after so many attempts.

### Separation of Duties  

Critical tasks required more than one person and method to complete. Prevents someone acting alone or making changes alone.  Can also prevent fraud as people are always witnessing eachother's actions.  

### Fail-Safe Defaults  

Systems are both defaulted to maximum security and set to deny any access until specific permissions are granted.  - "Deny by default"

**Failures/Exceptions** - Automatically lockdown access with a failure or unexpected exception occurs. When it doubt, lock it down!  Always have a predictable and set way for an error or exception occurs.  Also do not give too much information on an error which could help malicious hackers.  

### Economy of Mechanism  

Easier to understand security systems are more effective and better managed.  Using proven and tested libraries and components provides extra security.  Also important to employ minumum amount of components to reduce unnecessary risk.  The less components used automatically reduces risk.  

Using software with simpler code to maintain.  Caveat is that using industry adopted hardware or software can have vulnerabilities that you are not aware of.  Even then you can practice segmentation to minimize risk.  

### Least Common Mechanism  

Compartmentalize access systems and resources when possible.  This provides leaks of information and the inherent issue of shared data and resources.  Also, if a system is compromised this makes it easier to quarantine the affected system.  

### Human-Centered Design  

Humans will be using the systems with the security, so making sure they can interact with the systems in a better ensures better compliance overall with security measures.  Also look at systems holistically and how they work together.  

### Psychological Acceptability  

Using user friendly authentication methods that are easy to use so users do not try to somehow bypass security due conveinience issues.  Also allows users to understand why security is useful which allows for more compliance.  

### Open Design  

Allowing security components to be transparent rather than secretive.  Allows for peer review and sharing within the industry to allow for more innovation in security measures.  This will allow a situation where a hacker cannot break in even if they understand the design of the security system.  

### Zero Trust  

Automatically disallow access by default initially. Every part of the system must be verified including users regardless of legitimacy of requests or the user -> Complete Mediation.  Never any slacking or bypass of security measures.  Measures include:  

- MFA
- Encryption of data at rest  
- Continuous network monitoring  

### Elimiate Single Points of Failure  

Can be remediated by examining potential failures during the design.  Putting checks and balances in place to ensure that the entire system does not become compromised even if one component fails.  

## Firewalls  

Firewalls at a minimum can preventing flooding and forced unending loops.  They also support network segmentation to keep traffic from flooding from one network to another.  They use *access control lists* which define the rules normally from top to bottom on using specific protocols or ports.  

**Packet Filtering** - Uses rules/ACLs to decide what traffic is allowed to pass. Has no memory of packets encoutered before, only checks heading for source/destination/protocols used.  

**Stateful Inspection** - Remembers if session has been opened and if a resource in the network initiated that sessoion. Also checks header packet.  

**Application/Proxy firewall** - Acts as a proxy between outside and inside resources to allow even more control on what is sent and received.  Application or Next Gen firewalls can actually open packets and examine data for anything malicious.  

### Firewall Deployment

**Border** - Separate protected network from internet usually right after router.  Normally use either packet filtering or stateful inspection.  Can be used by organizations without any public services so most incoming data can be filter or restricted.  

**DMZ / Screen Subnet** - A semiprivate network that can host services that the public internet can access. Separates public service and access from internal systems and data.  

**Multilayer** - Uses multiple firewalls for different segments of a server, avoids "flat"networks, can even maintain different security levels for different classes of employees.  

**IDS/IPS** - Key differences are that IDS search for an report intrusions, while IPS takes action to mitigate or stop attacks.  Like Firewall can be host or network based.  They can only see what segment they are on,  so they either have to be on each segment or get packets forwarded  to them via via sensors or port mirroring.  IPS has cables physically routed through devices to create choke points.  

## Encryption  

**Symmetric** - Same key for encryption/decryption. Main takeaway is that it can handle large amounts of bulk data. Chief downside is that the key is sent with the data which cna leave it vulnerable to a breach/hack.  

**Asymmetric** - Exclusive key use, i.e. a private key is used with a public key and vice versa only. Data encrypted with someones public key can then be unlocked with private key for high security and confidentiality.  Data encrypted with a private key can then be deencrypted with the public key to confirm who sent the data (certificate). Used in SSL, TSL, and IPSec.  

**Hybrid** Uses assymetric key to encrypt data encrypted already with a symmetric key.  

## Device Hardening  

A combination of procedures to make a network device more resistant to hacks:  

- Change default passwords  
- Disable guest account  
- Monitor who has access  
- Enforce password policy  
- Disable/remove unnecessary services  
- Keep software/patches up to date  
- Only allow changes from trusted network for admin logins   
- Require encryption when possible  
- Backup any relevant data  
- Implement physical security measures  
- Keep accurate logs of who makes changes on devices  

## Access Control  

Data: Private, Confidential, Internal Use, Public Domain  

Virtual firewalls, VPNS, and IPS/IDS can be used even in cloud environments  

## AAA  

**Authentication** - Popularly used with MFA  
- Who are you? What do you know? What do you have? Where are you?  

**Authorization** - Permissions for legit user, best to use least priveledge  

**Accounting** - Tracking or logging what users do when accessing a system  

## Access Control Models  

**Discretionary Access Control** - Resource owner decides permissions  

**Nondiscretionary Access Control** - Access controls granted and monitor by security team, not the system admin.  

**Mandatory Access Control** - No transfer of permissions, permission is granted based on the sensitivity of resource and security level of user.  

**Role-Based Access Control** - Permissions assigned based on role or job function or groups  

**Rule-Based Access Control** - Permissions allowed or denied based on fixed rules with no exceptions, most common with firewalls that have hard rules on what traffic is allowed  

**Attributed-Based Access Control** - Allows permissions based on attributes at a certain point of time, e.g. using GPS to only allow access when at a work site, or using time to only allow access during work hours.  

**Context-Based Access Control** - Allows permissions based on state of a transaction.  Basically would be an application layer/NGFW that would inspect data and packets and see if the traffic makes sense based on the context of what the system expects and what other packets are being received.  

## Wireless Security  

**Infrastructure mode** - Wireless end devices communicate with wireless router/switch/WAP  

**Ad-hoc** - Usually temporary peer-to-peer network without switch/router  

 ### Wireless Encryption  

 **WEP/WPA** - Oldest and weakest encryption  
 **WPA2** - Most common in use today, all end devices use same key with central device  
 **WPA3** - Strongest available but not widely available yet.  Each end device and the central device negotiate one time unique key   
 
## Security Governance  

### Laws  

**FISMA** - Security controls for federal civlian agencies  

**CIPA** - Children protection, requiring schools and libraries to restrict access to inappropriate content  

**GDPR** - EU law for privacy of data of EU citizens.  Requires disclosure and permission for information collecting, allow users to manage their data including have it removed.  

**PIPEDA** - Canadian privacy law for handling personal information during commercial activities  

- Accountability
- Purpose  
- Consent  
- Collection  
- Retention and disclosure  
- Accuracy  
- Safeguard  
- Access  
- Compliance  
