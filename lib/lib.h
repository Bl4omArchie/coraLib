#ifndef LIB_H
#define LIB_H

#include <openssl/bn.h>
#include <stdio.h>
#include <math.h>


#define RETURN_SUCCES 1
#define RETURN_FAILURE 0


int bn_to_int(BIGNUM *a);
int binary_gcd(BIGNUM *a, BIGNUM *b);
int miller_rabin_primality_test(BIGNUM *p, int prime_size);
int generate_random_prime(int key_size, BIGNUM *candidate, BIGNUM *public_exponent);

#endif