#include "def.h"
#include <stdio.h>

int main() {
    char s[] = "Hello\tWorld!\n";
    char t[15];
    char o[13];

    escape(t, s);
    printf("ESCAPED: %s\n", t);
    unescape(o, t);
    printf("UNESCAPED: %s\n", o);
    return 0;
}

void escape(char target[], char source[]) {
    int s_i = 0, t_i = 0;
    for (; source[s_i] != '\0';) {
        switch (source[s_i]) {
        case '\n':
            target[t_i] = '\\';
            target[++t_i] = 'n';
            break;
        case '\t':
            target[t_i] = '\\';
            target[++t_i] = 't';
            break;
        default:
            target[t_i] = source[s_i];
            break;
        }
        ++s_i;
        ++t_i;
    }
}

void unescape(char target[], char source[]) {
    int s_i = 0, t_i = 0;
    for (; source[s_i] != '\0';) {
        switch (source[s_i]) {
        case '\\':
            switch (source[++s_i]) {
            case 't':
                target[t_i] = '\t';
                break;
            case 'n':
                target[t_i] = '\n';
                break;
            default:
                target[t_i] = source[s_i];
                break;
            }
            break;
        default:
            target[t_i] = source[s_i];
            break;
        }
        ++s_i;
        ++t_i;
    }
}

// vim:filetype=c
