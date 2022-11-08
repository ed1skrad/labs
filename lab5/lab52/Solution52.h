#include <stdio.h>
#include <time.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>


int* Allocate(int size) {
	return (int*)(malloc(size * sizeof(int)));
}

int** allocateSecond(int lines, int collumns) {
	int** arr = (int**)(malloc(lines * sizeof(int*)));
	for (int i = 0; i < lines; i++) {
		arr[i] = (int*)(malloc(collumns * sizeof(int)));
	}
	return arr;
}

int** allocateSecond(int lines) {
	int** arr = (int**)(malloc(lines * sizeof(int*)));
	return arr;
}

int* breakNumber(int number, int* size) {
	*size = 0;
	int* temp = (int*)malloc(sizeof(int));
	int i = 0;
	while (true) {
		int entered;
		printf_s("Write number: ");
		while (!scanf_s("%d", &entered) || getchar() != '\n') {
			printf("\nIncorrect input! Repeat!\n");
			rewind(stdin);
		}
		if (entered == number) break;
		temp[i] = entered;
		(*size)++;
		i++;
		temp = (int*)realloc(temp, (i + 1) * sizeof(int));
	}
	return temp;
}

void removeElement(int*& Array, int elementPosition, int size) {
	int* temp = (int*)malloc((size - 1) * sizeof(int));
	memmove(temp, Array, (elementPosition) * sizeof(int));
	memmove(temp + elementPosition, (Array)+(elementPosition + 1), (size - elementPosition) * sizeof(int));
	Array = temp;
}

void printArray(int N, int*& size, int** Array)
{
	printf("Your matrix after deleting all 0 elements:");
	printf("\n");
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < size[i]; j++) {
			printf("%d\t", Array[i][j]);
		}
		printf("\n");
	}
}