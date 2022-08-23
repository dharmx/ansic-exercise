#include "def.h"
#include <string.h>

int main() {
    signed n = -892;
    char s[100];
    itob(n, s, 16);
    printf("%s\n", s);
    return 0;
}

void itob(signed n, char s[], short b) {
    int nv = n < 0 ? 1 : 0;
    if (nv)
        n = -n;
    int i = 0, j;
    do {
        j = n % b;
        if (j < 10)
            s[i++] = '0' + j;
        else
            s[i++] = ('A' + j + 6) - 16;
    } while ((n /= b) > 0);
    if (nv)
        s[i++] = '-';
    s[i] = '\0';
    srev(s);
}

void srev(char s[]) {
    for (int c, i = 0, j = strlen(s) - 1; i < j; ++i, --j)
        c = s[i], s[i] = s[j], s[j] = c;
}

// vim:filetype=c
