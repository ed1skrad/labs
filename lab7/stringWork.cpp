#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>


char* getString()
{
    int num = 256;
    char* string = (char*)calloc(num, sizeof(char));
    char ch;
    int pos = 0;
    while (true)
    {
        ch = getchar();
        if (ch == '\n')
        {
            string[pos] = '\0';
            string = (char*)realloc(string, (pos + 1) * sizeof(char));
            return string;
        }

        string[pos] = ch;
        pos++;
        if (pos == 256)
            string = (char*)realloc(string, (pos + 1) * sizeof(char));
    }
}

int strLen(char* str) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

