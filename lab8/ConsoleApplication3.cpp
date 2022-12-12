#include <time.h>
#include <stdio.h>
#include "stringWork.h"
#include <string.h>
#include <malloc.h>
#include "taskSol.h"


int main(int argc, char** argv)
{

    if (argc == 1) {
        printf_s("\nUse console! \n");
        return 0;
    }
    int pos = 0;
    char** string = (char**)calloc(argc, sizeof(char*));
    char* temp = (char*)calloc(argc, sizeof(char*));
    char** tmp = (char**)calloc(argc, sizeof(char*));
    stringCopy(argc, argv, string);
    char** split = strSplit(*string, ' ', &argc);
    taskSol(argc, split, tmp, pos, temp);
    outputArray(argc, split);
    freeMatrix(argc, split);
}
