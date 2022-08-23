#include "def.h"
#include <string.h>

int main(void) {
    char s[] = "Hello    World \t\t Hello     \t\t\n";
    trim(s);
    printf("%s", s);
    return 0;
}

int trim(char s[]) {
    int i;
    for (i = strlen(s); --i > -1;)
        if (s[i] != '\n' && s[i] != ' ' && s[i] != '\t')
            break;
    s[i + 1] = '\0';
    return i;
}

// vim:filetype=c
