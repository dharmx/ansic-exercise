#include "def.h"

int main() {
    int blank = 0;
    for (char c = getchar(); c != EOF; c = getchar()) {
        if (c == ' ') {
            if (blank++ == 0) printf(" ");
            continue;
        } 
        printf("%c", c);
        blank = 0;
    }
    return 0;
}

// vim:filetype=c
