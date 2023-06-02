#include "lib.h"


#define MR_ROUND 10;

int generate_random_prime(int key_size, BIGNUM *candidate, BIGNUM *public_exponent) {
    BIGNUM *tmp_value_O = BN_new();
    BIGNUM *tmp_value_S = BN_new();


    BN_set_word(tmp_value_O, sqrt(2)*pow(2, key_size/2-1));    //this value is used at section 4.4
    

    //pick a random number and repeat operation until the number if prime
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
        //clear memory so we use again those variable
        BN_clear(tmp_value_S);
        BN_clear(candidate);
    }

    //free memory of sensitive data
    BN_free(tmp_value_O);
    BN_free(tmp_value_S);

    return RETURN_SUCCES;
}


int miller_rabin_primality_test(BIGNUM *p, int prime_size) {
    //Verify if a given number prime
    return RETURN_SUCCES;
}