#include "def.h"

int main() {
    // 10000111
    printf("%u\n", bitcount(135));
    printf("%u\n", fast_bitcount(135));
    return 0;
}

unsigned bitcount(unsigned X) {
    unsigned count = 0;
    for (; X != 0; X >>= 1)
        if (X & 1 && ++count)
            ;
    return count;
}

unsigned fast_bitcount(unsigned X) {
    unsigned count = 0;
    for (; X != 0 && ++count; X &= X - 1)
        ;
    return count;
}

// vim:filetype=c
