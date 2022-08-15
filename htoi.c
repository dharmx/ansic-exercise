#include "def.h"

int main() {
    printf("%d\n", htoi("0x5F23"));
    return 0;
}

int htoi(char number[]) {
    int buffer = 0, symbol, current;
    for (int index = 0; number[index] != '\0'; ++index) {
        symbol = number[index], current = 0;
        if (symbol >= 'A' && symbol <= 'F')
            current = 10 + symbol - 'A';
        if (symbol >= 'a' && symbol <= 'f')
            current = 10 + symbol - 'a';
        if (symbol >= '0' && symbol <= '9')
            current = symbol - '0';
        buffer = 16 * buffer + current; // what the fuck
    }
    return buffer;
}

// vim:filetype=c
