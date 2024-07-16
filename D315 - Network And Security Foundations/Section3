# Network Security Operations  

## Network Security Design - Policies

**Data Handling Policy** - How is data collected and encrypted(when at rest and intransit, backed up, and eventually removed when it is no longer needed.  Also defines confidentiality levels for data (authorization-who?), e.g. "public", "private", "classified", FYEO, etc.  

**Password** - Standards for password complexity, frequency of change, authentication lockout policies.

**Acceptable Use Policies** - Guidelines/Rules on using organizations systems, internet browsing at work, consequences for violation  

**BYOD** - Rules/Guidelines for an employee using their own device for work.  MDM, procedures for lost/stolen device, required software and updates  

**Privacy** - How the organization collects, uses, discloses IP and PII.  Specifies individuals' rights and how the organization complies with regulations and laws.  

## Security Principles and Best Practices  

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

