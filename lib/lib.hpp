#ifndef LIB_HPP
#define LIB_HPP

#include <openssl/bn.h>
#include <stdio.h>


#define RETURN_SUCCES 1
#define RETURN_FAILURE 0


int bn_to_int(BIGNUM *a);
int binary_gcd(BIGNUM *sto, BIGNUM *a, BIGNUM *b);
int miller_rabin_primality_test(int prime_size, int round);

#endif