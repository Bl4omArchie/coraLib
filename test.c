#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "src/rsa.h"


int rsa_generation_test() {
    // T.1 -> incorrect key_size and correct public exponent
    int key_size = 1024;    
    int e = 65537;          
    assert(rsa_generation(e, key_size) == 0);

    // T.2 -> correct key_size and incorrect public exponent 
    key_size = 2048;    
    e = 3;              
    assert(rsa_generation(e, key_size) == 0);

    // T.3 -> incorrect key_size and public exponent
    key_size = 1024;    
    e = 3;              
    assert(rsa_generation(e, key_size) == 0);
}

int main() {
    rsa_generation_test();
    return 0;
}