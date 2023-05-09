#include "lib.hpp"


/* Binary exponentiation:

1) Convert the number to elevate into binary
2) loop on each bit:
    - if bit == 1:

    - sinon:



*/

int binary_exponentiation(BIGNUM *sto, BIGNUM *a, BIGNUM *n) {
    if (BN_is_zero(n)) {
        return BN_one(sto);
    }
    
    return RETURN_SUCCES;
}