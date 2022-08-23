#include <stdio.h>

main() {
    for (int i = getchar(), count = 0; i != EOF; i = getchar()) {
        if (i >= 'A' && i <= 'Z')
            ++count;
        else if (i >= 'a' && i <= 'z')
            ++count;
        else if (i == '\n' || i == ' ' || i == '\t') {
            printf("%2d ", count);
            for (int j = 0; j < count; ++j)
                printf("-");
            printf("\n");
            count = 0;
        }
    }
}

// vim:filetype=c
