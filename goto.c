#include "def.h"

int main(void) {
    int a[] = {1, 4, 5, 0, 1, 4};
    any_zero(a, 6);
    return 0;
}

void any_zero(int a[], int l) {
    int i;
    for (i = 0; i < l; ++i)
        if (!a[i])
            goto FINISH;
    FINISH:
        printf("Finished at: %d\n", i);
}

// vim:filetype=c
