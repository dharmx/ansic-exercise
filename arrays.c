#include <stdio.h>

main() {
    int blank, tab, newline;
    blank = tab = newline = 0;

    int digits[10];
    for (int index = 0; index < 10; ++index)
        digits[index] = 0;

    for (int current = getchar(); current != EOF; current = getchar()) {
        if (current == ' ')
            ++blank;
        if (current == '\n')
            ++newline;
        if (current == '\t')
            ++tab;
        if (current >= '0' && current <= '9')
            ++digits[current - '0'];
    }

    printf("BLANK: %d\nTAB: %d\nNEWLINE: %d\n", blank, tab, newline);
    for (int index = 0; index < 10; ++index)
        printf("%d: %d\n", index, digits[index]);
}

// vim:ft=c
