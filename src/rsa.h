#ifndef RSA_H
#define RSA_H

#include <openssl/bn.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "../lib/lib.h"


#define RETURN_SUCCES 1
#define RETURN_FAILURE 0


struct RSA_KEYPAIR;

int consistency_test(struct RSA_KEYPAIR *kp_struct);
int generate_private_exponent(struct RSA_KEYPAIR *kp_struct);
int get_primes_factors(struct RSA_KEYPAIR *kp_struct);
int rsa_generation(int e, int key_size);

#endif