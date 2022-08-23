#include "def.h"
#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5, 9, 11, 23};
    int length = 8;
    printf("%d\n", bin_search(array, 9, 0, length - 1));
    printf("%d\n", bin_search_it(array, 9, length));
    printf("%d\n", bin_search_improved(array, 9, length));
    return 0;
}

int bin_search(int array[], int key, int start, int end) {
    if (end < start)
        return -1;
    int middle = (start + end) / 2;
    if (array[middle] == key)
        return middle;
    else if (array[middle] < key)
        return bin_search(array, key, middle + 1, end);
    else
        return bin_search(array, key, start, middle - 1);
}

int bin_search_it(int array[], int key, int length) {
    int start = 0, end = length - 1, middle;
    while (end >= start) {
        middle = (start + end) / 2;
        if (key < array[middle])
            end = middle - 1;
        else if (key > array[middle])
            start = middle + 1;
        else
            return middle;
    }
    return -1;
}

// Hermann Bottenbruch
// if the 'if' clause is matched then 'else'
// will keep increasing until value is same as end
int bin_search_improved(int array[], int key, int length) {
    int start = 0, end = length - 1, middle;
    while (end > start) {
        middle = (start + end) / 2;
        if (key <= array[middle])
            end = middle;
        else
            start = middle + 1;
    }
    return (key == array[start]) ? start : -1;
}

// vim:filetype=c
