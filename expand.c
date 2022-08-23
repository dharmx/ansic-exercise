#include "def.h"

int main() {
    char s[111];
    expand("-A-Za-p0-8a-m-q-7-90-9a-z-", s);
    printf("%s\n", s);
    return 0;
}

void expand(char s1[], char s2[]) {
    int i = 0, j = 0, c;
    while ((c = s1[i++]) != '\0')
        if (s1[i] == '-' && c <= s1[i + 1] && ++i)
            while (c < s1[i])
                s2[j++] = c++;
        else
            s2[j++] = c;
    s2[j] = '\0';
}

// vim:filetype=c:foldmethod=marker
