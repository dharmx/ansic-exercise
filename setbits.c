#include "def.h"

int main() {
    // X:11011001
    // Y:10000101
    // A:11010101
    printf("%u\n", setbits(217, 4, 3, 133));
    return 0;
}

unsigned getbits(unsigned X, unsigned P, unsigned N) {
    return (X >> (P + 1 - N)) & ~(~0 << N);
}

unsigned setbits(unsigned X, unsigned P, unsigned N, unsigned Y) {
    unsigned R = ~(~0 << N);
    unsigned O = P + 1 - N;
    unsigned A = X & ~(R << O);
    unsigned B = (Y & R) << O;
    return A | B;
}

// vim:filetype=c
