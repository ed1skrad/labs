#include <stdio.h>
#include "stringWork.h"
#include <malloc.h>

void erase(char** arr, int argc, int pos) {
    for (int i = pos; i < argc - 1; i++)
        (*arr)[i] = (*arr)[i + 1];
    (argc) -= 1;
    *arr = (char*)realloc(*arr, (argc + 1) * sizeof(char));
    (*arr)[argc] = '\0';
}

void remove1(char** arr) {

    int i = 0; //,k=0;
    int size = strLen(*arr);
    while ((*arr)[i] == ' ') {
        erase(arr, size, i);
    }

    i = size - 1;
    while ((*arr)[i] == ' ') {
        erase(arr, size, i);
        i--;
    }

    i = 1;
    while (i < size) {
        i++;

        if ((*arr)[i] == ' ') {
            i++;
            while ((*arr)[i] == ' ') {
                erase(arr, size, i);
            }
        }
    }
}

char** taskSol(int argc, char** split, char** tmp, int pos, char* temp)
{
    remove1(split);
    for (int i = 0; i < argc; i++)
        if (strLen(split[i]) % 2 != 0)
        {
            for (int j = i + 1; j < argc; j++)
            {
                if (strLen(split[j]) % 2 == 0)
                {
                    *tmp = split[i];
                    split[i] = split[j];
                    split[j] = *tmp;
                }
            }
        }

    for (int i = 0; i < argc; i++)
    {
        while (strLen(split[i]) % 2 == 0)
        {
            pos++;
            break;
        }
    }

    for (int i = 1; i < pos; i++)
    {
        temp = split[i];
        int j = i - 1;
        while (j >= 0 && strLen(temp) < strLen(split[j]))
        {
            split[j + 1] = split[j];
            j--;
        }
        split[j + 1] = temp;
    }

    return split;
}