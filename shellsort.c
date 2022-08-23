#include "def.h"

int main() {
    int items[] = {2, 2, 2, 3, 3, 5, 5, 6, 7, 8, 9, 9};
    int length = 12;
    shellsort(items, length);
    for (int index = 0; index < length;)
        printf("%d ", items[index++]);
    printf("\n");
    return 0;
}

void shellsort(int gaps[], int length) {
    for (int gap = length / 2; gap > 0; gap /= 2)
        for (int i = gap; i < length; ++i)
            for (int j = i - gap; j >= 0 && gaps[j] > gaps[j + gap]; j -= gap) {
                int temp = gaps[j];
                gaps[j] = gaps[j + gap];
                gaps[j + gap] = temp;
            }
}

// vim:filetype=c
