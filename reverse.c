#include "def.h"
#include <string.h>

int main() {
    char string[] = "XHello, World!!";
    srev(string);
    printf("%s\n", string);
    srev_var(string);
    printf("%s\n", string);
    srev_var_short(string);
    printf("%s\n", string);
    return 0;
}

void srev(char string[]) {
    for (int temp, index = 0, len = strlen(string); index < len / 2; ++index) {
        temp = string[index];
        string[index] = string[len - index - 1];
        string[len - index - 1] = temp;
    }
}

void srev_var(char string[]) {
    int temp, i, j;
    for (i = 0, j = strlen(string) - 1; i < j; ++i, --j) {
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }
}

void srev_var_short(char string[]) {
    for (int temp, i = 0, j = strlen(string) - 1; i < j; ++i, --j)
        temp = string[i], string[i] = string[j], string[j] = temp;
}

// vim:filetype=c
