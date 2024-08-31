# Chapter 3 Exercises  

1.	Authorization is the act of determining what the authenticated entity can do.  Access Controls are the actual implementation of the permissions given to the authorized entity.  

2.	The Brewer and Nash Model manages access controls within an organization where the access of resources may present conflict of interests due to the clients supported by the organization.  This would prevent a user from viewing certain client material after they've view other resources from a competitor.  

3.	The MAC address is unique to each network device, however its information and number can be easily overriden from within the operating system that manages that resource.  Therefore it is not a good sole use of filtering for access controls.  

4.	Authentication comes first to verify the claimed identity of the user, which then determines what resources can be accessed.  

5.	Mandatory Access Control determines controls based on a party outside of the owner, one example are the different levels of clearance and "Secret" designations of resources.  Discretionary Access Control is where the owner of the resource can determine who can access the resource.  

6.	The two models can dovetail with eachother because Bell LaPadula is concerned with read disclosure going up in security, and the Biba model is concerned with write access going up in security.  This would ensure both read access and write access could not be possible for unauthorized users.  

7.	Allowing read write access across the board for the user, group, and all others could be disastrous as there is no control of who could access or change the data at any given time. This could affect all parts of the CIA triad and would be difficult to track or what made any changes without strict auditing and logging.  

8.	An attribute based Access Control Model could be used to not allow users to access resources at certain times of day.  

9.	The confused deputy problem is an issue with privledge escalation.  It usually involves fooling a system that has higher privledges than the user, and making the system do these higher privledge operations on the users behalf. This is an issue with authentication and privledges and can be avoided with actual tokens.  

10.	Capabilities are actual something you have tokens that can be used to access resources, they are not based on who the user is but what they have.  Access Control Lists are logical controls held somewhere they allow access based on user attributes/roles/authentication/permissions.  

