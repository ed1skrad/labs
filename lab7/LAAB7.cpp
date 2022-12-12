#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "stringWork.h"
#include "Task.h"
#include <string.h>

int main()
{
    srand(time(NULL));
    while (true) {
        printf_s("Enter Task (1-2)\n");
        int task;
        while (!scanf_s("%d", &task) || task > 2 || task < 1 || getchar() != '\n') {
            printf_s("Incorrect input!\n");
            rewind(stdin);
        }
        void (*task_run[2]) () = { Task1, Task2};
        ((*task_run[task - 1])());
        printf_s("\n\n");
        rewind(stdin);
    }
}



