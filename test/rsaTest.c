#include "src/rsa.h"
#include <stdlib.h>
#include <stdio.h>


int rsa_generation_test() {
    // T.1 -> key_size validity
    int key_size = 1024;    //incorrect key_size
    int e = 65537;          //correct public exponent
    assert(rsa_generation(e, key_size) == 0);

    // T.2 -> public_exponent (e) validity
    int key_size = 2048;    //correct key_size
    int e = 3;              //incorrect public exponent
    assert(rsa_generation(e, key_size) == 0);

    // T.3 -> public_exponent and key_size validity
    int key_size = 1024;    //incorrect key_size
    int e = 3;              //incorrect public exponent
    assert(rsa_generation(e, key_size) == 0);
}