#include "def.h"
#include <ctype.h>
#include <stdlib.h>

int main() {
    printf("%d\n", atoi_custom("   -100"));
    printf("%d\n", atoi_custom("   +100"));
    printf("%d\n", atoi_custom("+100"));
    printf("%ld\n", strtol("-100", NULL, 10));
    return 0;
}

int atoi_custom(char number[]) {
    int buffer = 0;
    int index = 0;
    for (; isspace(number[index]); ++index)
        ;
    int minus = number[index] == '-' ? -1 : 1;
    if (number[index] == '-' || number[index] == '+')
        ++index;
    for (; number[index] != '\0'; ++index)
        buffer = buffer * 10 + (number[index] - '0');
    return buffer * minus;
}

// vim:filetype=c
