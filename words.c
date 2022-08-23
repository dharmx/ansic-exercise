#include <stdio.h>

main() {
    for (int c = getchar(); c != EOF; c = getchar()) {
        if (c == '\n' || c == '\t' || c == ' ')
            c = '\n';
        putchar(c);
    }
}

// vimLfiletype=c
