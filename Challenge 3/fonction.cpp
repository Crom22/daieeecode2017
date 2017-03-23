#include "fonction.h"
int fonction(unsigned int value){

    int num_bits = sizeof(unsigned int);
    int ans = 0;
    for (int i = 0; i < num_bits; i++) {
        if (value >> i & 0b1) {
            ans++;
        }
    }
    return ans;
}
