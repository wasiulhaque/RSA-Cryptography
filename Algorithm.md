# RSA-Cryptography
RSA (Rivest–Shamir–Adleman) is one of the first public-key cryptosystems and is widely used for secure data transmission. In such a cryptosystem. The Required algotrith for Encrypting a message using RSA Cryptography is described below:
       
       1. Take two large prime numbers p and q
       2. Multiply p by q and store it as N
       3. Take Q(N) = (p-1)(q-1)
       4. Choose the encryption key 'e', such that Q(N) < e < N, and e is co-prime with both N and Q(N)
       5. Choose 'd', where d is the modular inverse of "e mod Q(N)

Now, While encrypting, Enc = p^e mod N, where 'p' is the positional value of the alphabet in the actual message
And while decrypting,  Dec = p'^d mod N, where 'p'' is the positional value of the aplhabet in the encrypted message
