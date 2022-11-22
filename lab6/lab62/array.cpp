#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void allocateArray(int*** arr, int N, int M)
{
    (*arr) = (int**)malloc(sizeof(int*) * N);
    for (int i = 0; i < N; i++)
    {
        (*arr)[i] = (int*)malloc(sizeof(int) * M);
    }
}

int declareArrayRows()
{
    int N = 0;
    printf_s("Enter number of rows:");
    while (scanf_s("%d", &N) != 1 || N < 0 || getchar() != '\n')
    {
        printf("Incorrect input. Repeat:\n");
        rewind(stdin);
    }
    return N;
}

int declareArrayColls()
{
    int M = 0;
    printf_s("Enter number of rows:");
    while (scanf_s("%d", &M) != 1 || M < 0 || getchar() != '\n')
    {
        printf("Incorrect input. Repeat:\n");
        rewind(stdin);
    }
    return M;
}

void enterArray(int** arr, int N, int M) {
    srand(time(NULL));
    int check;
    printf("Random module? 1 - no!; 2 - yes!\n");

    while (scanf_s("%d", &check) != 1 || check < 1 || check > 2)
    {
        printf("Incorrect input. Repeat:\n");
        rewind(stdin);
    }
    if (check == 1)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                printf("Enter %d %d element:\n", i + 1, j + 1);
                while (scanf_s("%d", &arr[i][j]) != 1 || getchar() != '\n')
                {
                    printf("Incorrect input. Repeat!");
                    rewind(stdin);
                }
            }
        }
    }
    if (check == 2) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                arr[i][j] = 1000 - (rand() % 2000);
                printf("Random input %d %d : %d\n", i + 1, j + 1, arr[i][j]);
            }
        }

    }
}

void printArray(int** arr, int N, int M)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}