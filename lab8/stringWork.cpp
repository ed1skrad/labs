#include <malloc.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* getString()
{
    int num = 4096;
    char* string = (char*)calloc(num, sizeof(char));
    char ch;
    int pos = 0;
    while (true)
    {
        ch = getchar();
        if (ch == '\n')
        {
            string[pos] = '\0';
            string = (char*)realloc(string, (pos * 2) * sizeof(char));
            return string;
        }

        string[pos] = ch;
        pos++;
        if (pos == 4096)
            string = (char*)realloc(string, (pos  * 2) * sizeof(char));
    }
}

int strLen(char* str) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

char* strSub(char* str1, int start, int length) {
    int i = start;
    char* str2 = (char*)calloc(length + 1, sizeof(char));
    for (int i = 0; i < length; i++) {
        if (str1[i + start] == '\0') break;
        str2[i] = str1[i + start];
    }
    str2[length] = '\0';
    return str2;
}

char** strSplit(char* str, char letter, int* size) {
    int i = 0;
    int prev_pos = 0;
    int new_arr = 0;
    char** str2 = (char**)calloc(1, sizeof(char*));
    while (str[i] != '\0') {
        if (str[i] == letter) {
            str2[new_arr] = strSub(str, prev_pos, i - prev_pos);
            new_arr++;
            prev_pos = i + 1;
        }
        i++;
    }
    if (str[i] == '\0') {
        str2[new_arr] = strSub(str, prev_pos, i - prev_pos);
    }
    (*size) = new_arr + 1;
    return str2;
}

void strCopy(char* str1, char*& str2) {
    int len = strLen(str1);
    int i = 0;
    str2 = (char*)calloc(len + 1, sizeof(char));
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
}

void outputArray(int argc, char **split)
{
    for (int i = 0; i < argc; i++) {
        printf("%s ", split[i]);
    }
}

void freeMatrix(int argc, char** string)
{
    for (int i = 0; i < argc - 1; i++)
    {
        free(string[i]);
    }
}