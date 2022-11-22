#include "array.h"
#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int N = declareArray();
    int* mass = (int*)malloc(N * sizeof(int*));
    randomArray(N, mass);
    printf("\n\x1b[1;30mArray before: \x1b[0m\n");
    outputArray(N, mass);
    twoWaySort(N, mass);
    printf("\n\x1b[1;30mArray after: \x1b[0m\n");
    outputArray(N, mass);
    int pos = findPos(N, mass);
    ShellSort(pos, mass);
    outputArray(N, mass);
    printf("\n");
    ShellSortReverse(pos, mass);
    outputArray(N, mass);
    BubbleSort(pos, mass);
    outputArray(N, mass);
    printf("\n");
    shellTime(pos, mass);
    shellTimeRev(pos, mass);
    bubbleTime(pos, mass);
    free(mass);
}
