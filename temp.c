#include <stdio.h>

#define BOOL (c = getchar()) != EOF

#define LOWER 0
#define UPPER 300
#define STEP 20

main() {
    /* celsius = (5 / 9)(fahrenheit - 32) */
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d %6d\n", fahr, celsius);
        fahr = fahr + step;
    }

    fahr = lower;
    float celsius_fl;
    printf("\n");
    while (fahr <= upper) {
        celsius_fl = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius_fl);
        fahr = fahr + step;
    }

    printf("\n");
    for (int fahr_for = lower; fahr_for <= upper; fahr_for += step)
        printf("%3d %6.1f\n", fahr_for, (5.0 / 9.0) * (fahr_for - 32.0));

    printf("\n");
    for (int fahr_for = LOWER; fahr_for <= UPPER; fahr_for += STEP)
        printf("%3d %6.1f\n", fahr_for, (5.0 / 9.0) * (fahr_for - 32.0));

    // NOTE: copy input to output
    /* int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    } */

    /* int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
        c = getchar();
    } */

    /* int c;
    while (BOOL) {
        printf("EOF: %d,EXPR: %d\n", EOF, BOOL);
        c = getchar();
    } */

    // NOTE: character counting
    /* long nc;
    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld", nc); */

    // NOTE: line counting
    /* int c;
    int nc = 0;
    while (BOOL)
      if (c == '\n') {
        ++nc;
        printf("line: %d\n", nc);
      } */

    // NOTE: word counting
    int c;
    int nc = 0;
    while (BOOL)
        if (c == ' ' || c == '\t' || c == '\n') {
            ++nc;
            printf("word: %d\n", nc);
        }
}

// vim:filetype=c
