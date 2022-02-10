# FHash
A very large potentially cryptographically secure pseudo random generator

This is made for a super large, 16 KiB size state hash function - which in CTR mode can be used as a random number generator.

A note:
  The big crush test used 32 rounds, and for the same complexity as the ChaCha20 cipher, you should probably use 40 rounds.
  I do recommend using 64 or 256 rounds for added future proofing, as this project is already insane.

  When using this function, keep in mind to seed it securely, and remember that the null block always hashes to all zeros.
