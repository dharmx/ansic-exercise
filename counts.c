#include <stdio.h>

main() {
    for (int c = getchar(), b = 0, t = 0, n = 0; c != EOF; c = getchar()) {
        switch (c) {
        case '\n':
            ++n;
            break;
        case '\t':
            ++t;
            break;
        case ' ':
            ++b;
            break;
        }
        // the literal value is printed if it not a valid escape code
        // like for example: \c
        printf("TABS: %d,BLANKS: %d,NEWLINES: %d\n", t, b, n);
    }
}

// vim:filetype=c
