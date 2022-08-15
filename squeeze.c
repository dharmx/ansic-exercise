#include "def.h"

int main() {
    char a[] = "Hello!";
    char b[] = "There!";
    char r[] = "sahgkshgsdhgklsdhg";
    squeeze(a, b);
    squeeze_one(r, 'g');
    printf("a: %s, b: %s\n", a, b);
    printf("sahgkshgsdhgklsdhg -> %s\n", r);
    return 0;
}

int in(char k, char s[]) {
    for (int i = 0; s[i] != '\0'; ++i)
        if (s[i] == k)
            return 1;
    return 0;
}

void squeeze(char a[], char b[]) {
    int i, j;
    for (i = j = 0; a[i] != '\0'; ++i)
        if (!in(a[i], b))
            a[j++] = a[i];
    a[j] = '\0';
}

void squeeze_one(char s[], char k) {
    int i, j;
    for (i = j = 0; s[i] != '\0'; ++i)
        if (s[i] != k)
            s[j++] = s[i];
    s[j] = '\0';
}
