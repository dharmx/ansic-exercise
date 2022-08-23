#include "def.h"

int main() {
    printf("%d\n", any("Hello, ", "World!"));
    return 0;
}

int any(char a[], char b[]) {
    for (int i = 0; a[i] != '\0'; ++i)
        for (int j = 0; b[j] != '\0'; ++j)
            if (a[i] == b[j])
                return i;
    return -1;
}

// vim:filetype=c
