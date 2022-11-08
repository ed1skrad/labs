#include "Solution52.h"


int main()
{
    int lineNumber = 0;
    printf("Enter the number of columns: ");
    int lineNumber = 0;

    while (scanf_s("%d", &lineNumber) != 1 || lineNumber < 0 || getchar() != '\n')
    {
        printf("Incorrect input! Repeat!");
        rewind(stdin);
    }
    int** Array = allocateSecond(lineNumber);
    int* sizeArray = Allocate(lineNumber);

    for (int i = 0; i < lineNumber; i++)
    {
        printf("Number of line: %d \n", i + 1);
        int size;
        Array[i] = breakNumber(-100, &size);
        int N = 0;
        while (N < size) {
            if (Array[i][N] == 0) {
                removeElement(Array[i], N, size);
                N = 0;
                size--;
            }
            else N++;
        }
        sizeArray[i] = size;
    }

    printArray(lineNumber, sizeArray, Array);
    free(Array);
    free(sizeArray);
}
