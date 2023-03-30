#include "lib.hpp"


int bn_to_int(BIGNUM *a) {
    //Convert a BIGNUM into an int
    char sto = *BN_bn2dec(a);
    return (int)sto;
}


int binary_gcd(BIGNUM *sto, BIGNUM *a, BIGNUM *b) {
    //Greatest common divisor
    return RETURN_SUCCES;
}