#include "def.h"
#include <limits.h>
#include <string.h>

int main() {
    char sn1[50];
    itoa_ex(-1024, sn1);
    printf("%s\n", sn1);

    char sn2[50];
    itoa(INT_MIN, sn2);
    printf("%s\n", sn2);

    char sn3[50];
    itoa_field(-123, sn3, 10);
    printf("%s\n", sn3);

    return 0;
}

void itoa_ex(int n, char s[]) {
    int nv = n < 0 ? 1 : 0;
    if (nv)
        n = -n;
    int r = n % 10, i = 0;
    while (n > 0) {
        s[i++] = '0' + r;
        n = n / 10;
        r = n % 10;
    }
    if (nv)
        s[i++] = '-';
    s[i] = '\0';
    srev(s);
}

void itoa(long n, char s[]) {
    int nv = n < 0 ? 1 : 0;
    if (nv)
        n = -n;
    int r = n % 10, i = 0;
    while (n > 0) {
        s[i++] = '0' + r;
        n = n / 10;
        r = n % 10;
    }
    if (nv)
        s[i++] = '-';
    s[i] = '\0';
    srev(s);
}

void itoa_field(signed n, char s[], int w) {
    int nv = n < 0 ? 1 : 0;
    if (nv)
        n = -n;
    int r = n % 10, i = 0;
    while (n > 0) {
        s[i++] = '0' + r;
        n = n / 10;
        r = n % 10;
    }
    if (nv)
        s[i++] = '-';
    if (i < w)
        while (w - i != 0)
            s[i++] = ' ';
    s[i] = '\0';
    srev(s);
}

void srev(char s[]) {
    for (int t, i = 0, j = strlen(s) - 1; i < j;
         t = s[i], s[i++] = s[j], s[j--] = t)
        ;
}

// vim:filetype=c
