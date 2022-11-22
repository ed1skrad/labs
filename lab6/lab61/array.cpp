#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void outputArray(int N, int* mass)
{
    for (int i = 0; i < N; i++) {
        printf("%d ", mass[i]);
    }
}

void randomArray(int N, int* mass)
{
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        mass[i] = 10000 - (rand() % 20000);
    }
}

int declareArray()
{
    int N = 0;
    printf_s("Enter number of array elements:\n");
    while (scanf_s("%d", &N) != 1 || N < 0 || getchar() != '\n')
    {
        printf("Incorrect input. Repeat:\n");
        rewind(stdin);
    }
    return N;
}