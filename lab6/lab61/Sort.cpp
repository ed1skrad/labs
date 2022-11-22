#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ShellSortReverse(int N, int* mass) {
    int i, j, k, tmp;
    printf("\n\x1b[1;30mShell sort reverse:\x1b[0m\n");
    for (i = N / 2; i > 0; i = i / 2)
    {
        for (j = i; j < N; j++)
        {
            for (k = j - i; k >= 0; k = k - i)
            {
                if (mass[k + i] <= mass[k])
                    break;
                else
                {
                    tmp = mass[k];
                    mass[k] = mass[k + i];
                    mass[k + i] = tmp;
                }
            }
        }
    }
}

void ShellSort(int N, int* mass)
{
    int i, j, k, tmp;
    printf("\n");
    printf("\n\x1b[1;30mShell sort:\x1b[0m\n");
    for (i = N / 2; i > 0; i = i / 2)
    {
        for (j = i; j < N; j++)
        {
            for (k = j - i; k >= 0; k = k - i)
            {
                if (mass[k + i] >= mass[k])
                    break;
                else
                {
                    tmp = mass[k];
                    mass[k] = mass[k + i];
                    mass[k + i] = tmp;
                }
            }
        }
    }
}

void BubbleSort(int N, int* mass) {
    printf("\n\x1b[1;30mBubble sort:\x1b[0m\n");
    for (int i = 0; i < N - 1; i++) {
        for (int j = (N - 1); j > i; j--) {
            if (mass[j - 1] > mass[j]) {
                int temp = mass[j - 1];
                mass[j - 1] = mass[j];
                mass[j] = temp;
            }
        }
    }
}


void twoWaySort(int N, int* mass)
{
    int total = 0;
    for (int i = 0; i < N; i++)
    {
        if (mass[i] % 2 != 0 || mass[i] < 0)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (mass[j] % 2 == 0 && mass[j] > 0)
                {
                    int tmp = mass[i];
                    mass[i] = mass[j];
                    mass[j] = tmp;
                }
            }
        }
    }
}

int findPos(int N, int* mass)
{
    int pos = 0;

    for (int i = 0; i < N; i++)
    {
        while (mass[i] % 2 == 0 && mass[i] > 0)
        {
            pos++;
            break;
        }
    }
    return pos;
}

void shellTime(int pos, int* mass)
{
    clock_t start = clock();
    ShellSort(pos, mass);
    clock_t end = clock();
    double secondsShell = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\n\x1b[1;31mShell time:%.15lf\x1b[0m\n", secondsShell);
}

void bubbleTime(int pos, int* mass)
{
    clock_t start = clock();
    BubbleSort(pos, mass);
    clock_t end = clock();
    double secondsBubble = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\n\x1b[1;31mBubble time:%.15lf\x1b[0m\n", secondsBubble);
}

void shellTimeRev(int pos, int* mass)
{
    clock_t start = clock();
    ShellSort(pos, mass);
    clock_t end = clock();
    double secondsShellRev = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\n\x1b[1;31mShell reverse time:%.15lf\x1b[0m\n", secondsShellRev);
}