#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>
#include "stringWork.h"
#include <string.h>

void Task1() {
    printf_s("Enter string:\n");
    char* string = getString();
    printf("Enter k:\n");
    int k = strLen(getString());
    int strSize = strLen(string) + 1;
    int startPos = 0;
    for (int i = 0; i < strSize; i++) {
        if (string[i] == ' ' || string[i] == '\0') {
            if (i - startPos > k) {
                char* temp = (char*)malloc((strSize - (i - startPos)) * sizeof(char));
                memmove(temp, string, (startPos) * sizeof(char));
                memmove(temp + startPos - 1, (string)+i, (strSize - i) * sizeof(char));
                string = temp;
                strSize -= (i - startPos);
                i = 0;
                startPos = 0;
            }
            startPos = i + 1;
            continue;
        }
    }
    printf("String after delete: %s", string);
    free(string);
}

void Task2() {
    printf_s("Enter string: ");
    char* string = getString();
    printf("Enter k:\n");
    char k = getchar();
    int total = 0;
    int str_size = strLen(string) + 1;
    for (int i = 0; i < str_size; i++)
    {
        if (string[i] == k)
        {
            total++;
            if (total % 2 == 0) {
                for (int j = i; j < str_size; j++)
                {
                    string[j] = string[j + 1];
                }
                str_size--;
                i--;
            }
        }
    }
    printf("String now: %s", string);
    free(string);
}
