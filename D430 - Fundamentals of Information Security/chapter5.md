# Chapter 5  

1.	A Caesar cipher is a subsitution cipher as it substitutes letters within the alphabet based on a shift in numbers.  

2.	A block cipher takes a predetermined block of data and encrypts it, whereas the stream cipher encrypts one bit at a time. Blocks are usually used for things of predetermined sizes like files or messages.  The stream is for things not determined beforehand like data being sent or streamed over a network.  

3.	Elliptic Curve Cryptograhy is a type of assymetric cyrptography that uses shorter keys and still maintains high level of security.  It is ideal on hardware with less processing power and memory.  Examples include SHA-2 ECDSA.  

4.	The key point in the second principle is that the system doesn't require secrecy or trade secrets in order to be effective.  Even if it is known how the cryptograph works, it still can't be broken. This transparency also fosters cooperation, discussion, and improvements.  

5.	A substituion cipher is like the Caesar Cipher where a word in the alphabet is substituted with another based on a certain predetermined number, this information is then used as a key to encrypt and decrypt the messages between communicators.  

6.	Symmetric uses one private key that is shared and kept secret between the two communicators.  Asymmetric has both a public and private key.  The public key is used to encrypt a message for another person and can also be used to verify authenticity.  The private key is then safeguarded and used by the receiver to personally decrypt the message made with their public key. With asymmetric there is no need to have to secretly exchange each private key. Only one private key needs guarded by the receiver.  

7.	3DES is DES encrypted three times over with three different keys, DES being a precursor to the symmetric AES.  

8. Public key cryptography is asymmetric, the key point being that the public key is available publicly and can be used to encrypt a message for someone who holds their own private key to decrypt the message.  The public key can also be used to authenticate a message from the sender.  

9.	An example of ROT13 substitution cipher:  V is I, Q is D, etc.  

10.	Physical security is very important especially for data at rest, even if it's encrypted.  Poor physical security can allow the data to be physically removed which will then give the hackers access to at least attempt to decrypt the information.  

## Other Notes  

-	Hash functions are keyless cryptopraphy that can normally be used to guarante data integrity and authenticity.  Ex: SHA-2 

-	Certificates use a certificate authority that verifies using personal info and public key information.  PKIs split the process into certificate authorities and registration authorities.  