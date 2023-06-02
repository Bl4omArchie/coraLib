# Implementation of the RSA cryptosystem in C with openSSL

CoraLib is the name of the project, after pubcrypt, an RSA implementation in python, I'm starting a C/C++ implementation of RSA with the library openSSL.
This implementation will reach another level with the use of Bignum and more mathematical algorithm for computing keypair.

I also plan to code the project with parallel programming and maybe later to make the computing done by GPU with CUDA language.

To resume, this project intends to implement:
- a function that generate an RSA keypair
- a function that generate prime numbers
- test that verify the validity of the RSA keypair (consistency test)
- several arithmetic functions (ie: gcd, fast exponentiation, lcm...)

And also other side features like OAEP and PKCS encryption/signing scheme.

##  Installation

Install the demo: ```git clone https://github.com/Bl4omArchie/CoraLib.git``` 


## Plan

### ✅ Main branch
- Demo version

### 🚧 coralib-dev
- all the unfilled function
- benchmark
- function rsa_generation() with paralel programming
- function rsa_generation() with GPU computing

## Version

| Version          | Description     |
| :--------------: |:---------------:|
| v1.0             | Demo version. Only prototypes and empty functions |


## Author
You can contact me and see my work here:
- Blog: https://bl4omarchie.github.io/archX/
- Discord server: https://discord.com/invite/D2wGP62
- Twitter: https://twitter.com/Bl4om_Archie

## Sources

[1] https://www.openssl.org/docs/man1.0.2/man3/bn.html  
[2] https://en.algorithmica.org/hpc/                    
[3] https://nvlpubs.nist.gov/nistpubs/fips/nist.fips.186-4.pdf  
[4] https://nvlpubs.nist.gov/nistpubs/SpecialPublications/NIST.SP.800-56Br2.pdf
[5] https://datatracker.ietf.org/doc/pdf/draft-moriarty-pkcs1-01.pdf