#include "lib.h"


#define MR_ROUND 10;

int generate_random_prime(int key_size, BIGNUM *candidate, BIGNUM *public_exponent) {
    //Pickup two random number until they are both primes
    BIGNUM *tmp_value_O = BN_new();
    BIGNUM *tmp_value_S = BN_new();


    BN_set_word(tmp_value_O, sqrt(2)*pow(2, key_size/2-1));    //this value is used at section 4.4
    
    while (1) {
        BN_rand(candidate, key_size/2, -1, 0);
        if (!(BN_is_odd(candidate))) 
            BN_add(candidate, candidate, BN_value_one());
        
        
        if (BN_cmp(candidate, tmp_value_O) == -1) 
            continue;

        BN_sub(tmp_value_S, tmp_value_S, BN_value_one());
        if (BN_is_one(binary_gcd(tmp_value_S, public_exponent))) {
            if (miller_rabin_primality_test(candidate, key_size) == 1) 
                break;
            
        }
        BN_clear(tmp_value_S);
        BN_clear(candidate);
    }

    //final clear
    BN_free(tmp_value_O);
    BN_free(tmp_value_S);

    return RETURN_SUCCES;
}

int miller_rabin_primality_test(BIGNUM *p, int prime_size) {
    //Verify if a given number is a prime number
    return RETURN_SUCCES;
}