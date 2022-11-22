#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int findMin(int* arr, int M)
{
    int min = arr[0];
    for (int i = 0; i < M; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

void insertionSort(int** arr, int N, int M) {
    int i, j;
    int* key;
    for (i = 1; i < N; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && findMin(arr[j], M) < findMin(key, M))
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printf("\n");
    printf("After sorting:\n");
}

void freeArray(int** arr, int N)
{
    free(arr);
}

void minElement(int** arr, int N, int M)
{
    for (int i = 0; i != N; ++i) {

        int min = arr[i][0];

        for (int j = 1; j != M; ++j) {

            if (min > arr[i][j])
                min = arr[i][j];

        }

        printf("Row: %d, Min element: %d", i + 1, min);
        printf("\n");
    }
}