#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int** matrix(int N, int M)
{
    int** A = (int**)malloc(sizeof(int*) * N);
    for (int i = 0; i < N; i++)
        A[i] = (int*)malloc(sizeof(int) * M);
    return A;
}

void freematrix(int** A, int N, int M)
{
    for (int i = 0; i < N; i++) {
        free(A[i]);
    }
    free(A);
}

void enterArray(int** A, int N, int M) {
    srand(time(NULL));
    int check;
    printf("Random module? 1 - no!; 2 - yes!\n");

    while (scanf_s("%d", &check) != 1 || check < 0 || getchar() != '\n')
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
                while (scanf_s("%d", &A[i][j]) != 1 || getchar() != '\n')
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
                A[i][j] = 100 - (rand() % 200);
                printf("Random input %d %d:%d\n", i + 1, j + 1, A[i][j]);
            }
        }

    }
}


void printArray(int** A, int N, int M)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
}

void Solution(int** A, int N, int M)
{
    int sum = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < M; j++) {
            printf("%d ", A[i][j]);
            if (A[i][j] != A[i + 1][j])
                sum++;
        }
    }
    printf("The sum of the different elements above the main diagonal :%d", sum);
}

int declaringArrayLines()
{
    int N;
    printf("Enter number of lines:\n");
    while (scanf_s("%d", &N) != 1 || getchar() != '\n' || N < 0)
    {
        printf("Incorrect input, repeat!");
        rewind(stdin);
    }
    return N;
}

int declaringArrayCollumns()
{
    int M;
    printf("Enter number of collumns:\n");
    while (scanf_s("%d", &M) != 1 || getchar() != '\n' || M < 0)
    {
        printf("Incorrect input, repeat!");
        rewind(stdin);
    }
    return M;
}
