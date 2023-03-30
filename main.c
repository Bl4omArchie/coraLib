#include <stdio.h>
#include <stdlib.h>
#include "src/rsa.h"


/*
Arguments:
 - nBits: INTEGER
 - e: INTEGER (optional)

The key size shall be between 2048 and 8192 with both number include
*/


int main(int argc, char *argv[]) {
    //start generation
    int key_size;
    int e = 65537;

    if (argc <= 3) {
        if (argc == 2) {
            e = atoi(argv[1]);
        }
        key_size = atoi(argv[0]);
    }
    else {
        printf ("Too many arguments");
        return EXIT_FAILURE;
    }
    

    if (rsa_generation(e, key_size)) {
        printf ("KeyPair generated with success! ");
        return EXIT_SUCCESS;
    }
    
    else {
        printf ("An error occur, please retry");
        return EXIT_FAILURE;
    }
}