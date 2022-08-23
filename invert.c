#include "def.h"

int main() {
    // 10011011 -> 10000111
    printf("%u\n", invert(155, 4, 3));
    return 0.00;
}

unsigned invert(unsigned X, unsigned P, unsigned N) {
    unsigned R = ~(~0 << N);
    unsigned D = P + 1 - N;
    unsigned M = R << D;
    unsigned I = ~(X & M) & M;
    unsigned Z = X & ~M;
    return Z | I;
}

// vim:filetype=c
