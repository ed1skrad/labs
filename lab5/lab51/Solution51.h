#include <stdlib.h>
#include <stdio.h>

void allocateArray(int*& eNumbers, int limit)
{

    eNumbers = (int*)malloc(sizeof(int) * limit);
}

void printArray(int*& eNumbers, int limit)
{
    printf("\nPrime numbers in range 1 to 100 are: \n");
    for (int i = 2; i < limit; i++)
    {
        if (eNumbers[i] == 1)
        {
            printf("%d\n", i);
        }
    }
}
void Solution(int *&eNumbers, int limit) {
    for (int i = 2; i < limit; i++) //присваивание значений i от 1 до 100
    {                           
        eNumbers[i] = 1;
    }

    for (int i = 2; i < limit; i++)
    {
        if (eNumbers[i] == 1)
        {
            for (int j = i; i * j < limit; j++)
            { 
                eNumbers[i * j] = 0;
            }
        }
    }
}
