#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Task1();
void Task2();
void Task3();

int main()
{
    //Choose LAB task
    srand(time(NULL));
    printf_s("Enter Task (1-3)\n");
    int task;
    if (!scanf_s("%d", &task) || task > 3 || task < 1) {
        printf_s("Invalid task number!\n");
        return 0;
    }
    switch (task) {
    case 1:
        Task1();
        break;
    case 2:
        Task2();
        break;
    case 3:
        Task3();
        break;
    }
    rewind(stdin);
    getchar(); //Waiting for pressing ENTER to close program
}

void Task1() {

    srand(time(NULL));

    int M, N;

    int sum = 0;

    int negative = 0;

    printf("Enter number of lines:");
    while (scanf_s("%d", &N) != 1 || N > 100 || N < 1)
    {
        printf("Incorrect input. Repeat:");
        rewind(stdin);
    }

    printf("Enter number of columns:");
    while (scanf_s("%d", &M) != 1 || M > 100 || M < 1)
    {
        printf("Incorrect input. Repeat:");
        rewind(stdin);
    }

    int A[100][100] = {};

    printf_s("Use random values? (1 - yes, 0 - no)\n");
    int random;
    while (!scanf_s("%d", &random) || random > 1 || random < 0) { //random module, fullfilling array
        printf("Incorrect input.");
        rewind(stdin);
    }


    for (int i = 0; i < M; i++)
    {
        for (int k = 0; k < N; k++) {
            if (random == 1) { //fullfilling array with random values
                A[i][k] = 100 - (rand() % 200);
                printf("Random input %d%d:%d\n",i + 1, k + 1, A[i][k]);
            }
            else {
                printf("Enter number%d%d: ", i + 1, k + 1); // fullfilling array with keyboard values
                if (scanf_s("%d", &A[i][k]) != 1)
                {
                    printf("Incorrect input. End of program.");
                    return;
                }
            }
        }
    }

    for (int i = 0; i < M; i++)
    {
        for (int k = 0; k < N; k++)
        {
            printf("%d ", A[i][k]);
        }
        printf("\n");
    }

    for (int i = 0; i < M; i++)
    {
        negative = 0;
        sum = 0;
        for (int k = 0; k < N; k++) {
            if (A[i][k] != A[k][i]) {
                negative = 0;
                break;
            }
            sum += A[i][k];

            if (A[i][k] < 0) negative = 1;
        }

        if (negative == 1)
        {
            printf("Sum at %d row and collumn: %d\n", i, sum);
        }
    }
}
void Task2() {

    srand(time(NULL));

    int M, N;

    printf("Enter number of lines: ");

    while (scanf_s("%d", &M) != 1 || M > 100 || M < 0)
    {
        printf("Incorrect input. Repeat:");
        rewind(stdin);
    }

    printf("Enter number of columns: ");

    while (scanf_s("%d", &N) != 1 || N > 100 || N < 0)
    {
        printf("Incorrect input. Repeat:");
        rewind(stdin);
    }

    int A[100][100] = {};

    printf_s("Use random values? (1 - yes, 0 - no)\n");

    int random;

    while (!scanf_s("%d", &random) || random > 1 || random < 0) { //random module, fullfilling array
        printf("Incorrect input.");
        rewind(stdin);
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++) {
            if (random == 1) { //fullfilling array with random values
                A[i][j] = rand() % 100;
                printf("Random input%d%d:%d ",i + 1, j + 1, A[i][j]);
                printf("\n");
            }
            else {
                printf("Enter number%d%d: ", i + 1, j + 1); // fullfilling array with keyboard values
                if (scanf_s("%d", &A[i][j]) != 1)
                {
                    printf("Incorrect input. End of program.");
                    rewind(stdin);
                }
            }
        }
    }

    printf("Matrix:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    bool sort = false;
    int k = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j < M; j++)
            if (A[i][j] > A[i][j - 1])
            {
                sort = true;
                printf("String %d isnt sorted.\n", i);
                k = i;
                break;
            }
        if (sort)
            break;
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M - i - 1; j++)
        {
            if (A[k][j] < A[k][j + 1])
            {
                int tmp = A[k][j];
                A[k][j] = A[k][j + 1];
                A[k][j + 1] = tmp;
            }
        }
    }

    printf("Sorted:\n");
    for (int i = 0; i < M; i++)
        printf("%d ", A[k][i]);
}

void Task3() {
    int N;
    int M;
    int sum = 0;

    srand(time(NULL));

    printf("Vvedite chislo strok:");
    while (scanf_s("%d", &N) != 1 || N > 100 || N < 0)
    {
        printf("Incorrect input. Repeat:");
        rewind(stdin);
    }

    printf("Vvedite chislo stolbcov:");
    while (scanf_s("%d", &M) != 1 || M > 100 || M < 0)
    {
        printf("Incorrect input. Repeat:");
        rewind(stdin);
    }

    int A[100][100] = {};

    printf_s("Use random values? (1 - yes, 0 - no)\n");
    int random;
    while (!scanf_s("%d", &random) || random > 1 || random < 0) { //random module, fullfilling array
        printf("Incorrect input.");
        rewind(stdin);
    }


    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++) {
            if (random == 1) { //fullfilling array with random values
                A[i][j] = rand() % 100;
                printf("Random input%d%d:%d\n", i + 1, j + 1, A[i][j]);
            }
            else {
                printf("Enter number%d%d: ", i + 1, j + 1); // fullfilling array with keyboard values
                if (scanf_s("%d", &A[i][j]) != 1)
                {
                    printf("Incorrect input. End of program.");
                    rewind(stdin);
                }
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < N / 2; i++)
    {
        for (int j = 0; j < M / 2; j++) {
            sum += A[i][j];
        }
    }

    for (int i = 0; i < N / 2; i++)
    {
        for (int j = 0; j < M / 2; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("%d", sum);
}