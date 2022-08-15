#include "def.h"
#include <stdio.h>

int main() {
    int b, t, n;
    b = t = n = 0;
    for (char c = getchar(); c != EOF; c = getchar()) {
        if (c == ' ')
            ++b;
        if (c == '\n')
            ++n;
        if (c == '\t')
            ++t;
    }
    printf("blanks: %d, tabs: %d, newlines: %d\n", b, t, n);
    return 0;
}

// vim:filetype=c
