#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "sort.h"
#include "array.h"

int main()
{
    int** array;

    int min = 0;

    int N = declareArrayRows();

    int M = declareArrayColls();

    allocateArray(&array, N, M);

    enterArray(array, N, M);

    printf("\nBefore sorting:\n");

    printArray(array, N, M);

    insertionSort(array, N, M);

    minElement(array, N, M);

    printArray(array, N, M);

    freeArray(array, N);
}