#include "def.h"

int main() {
    char array[] = "Hello, World!\n";
    lower(array);
    for (int index = 0; array[index] != '\0';)
        printf("%c", array[index++]);
}

void lower(char array[]) {
    for (int index = 0; array[index] != '\0'; ++index)
        array[index] = array[index] >= 'A' && array[index] <= 'Z'
                           ? array[index] - 'A' + 'a'
                           : array[index];
}

// vim:filetype
