#include "lib.h"


/* Binary exponentiation:

1) Convert the number to elevate into binary
2) loop on each bit:
    - if bit == 1:

    - sinon:

*/


BIGNUM *binary_exponentiation(BIGNUM *a, BIGNUM *b) {
    if (BN_is_zero(a)) return b;
    if (BN_is_zero(b)) return a;

    BIGNUM *az = BN_new();
    BIGNUM *bz = BN_new();
    BIGNUM *shift = BN_new();
    BN_copy(az, a);
    BN_copy(bz, b);

    if (BN_cmp(a, b) == -1) 
        BN_copy(shift, a);
    else
        BN_copy(shift, b);

    BN_rshift(b, b, bz);
    BIGNUM *diff = BN_new();
    
    while (!BN_is_zero(a)) {
        BN_rshift(a, a, *az);
        BN_sub(diff, b, a);
        az = BN_num_bits(diff) - BN_get_bit(diff, 0);
        BN_copy(b, BN_min(a, b));
        BN_abs(diff, diff);
        BN_copy(a, diff);

        BN_clear(diff);
    }

    BN_lshift(b, b, shift);

    BN_free(diff);

    return b;
}