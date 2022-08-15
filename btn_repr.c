#include "def.h"

int main() {
    for (char c = getchar(); c != EOF; c = getchar()) {
        if (c == '\t') printf("\\t");
        else if (c == '\b') printf("\\b");
        else if (c == '\n') printf("\\n");
        else printf("%c", c);
    }
    return 0;
}

// vim:filetype=c
