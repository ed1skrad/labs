#include <stdio.h>
#include <time.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>


int* AllocateMatrix(int size) {
	return (int*)(malloc(size * sizeof(int)));
}


int** allocateSecondMatrix(int lines) {
	int** mass = (int**)(malloc(lines * sizeof(int*)));
	return mass;
}

int* breakNumber(int number, int* size) {
	*size = 0;
	int* temp = (int*)malloc(sizeof(int));
	int i = 0;
	while (true) {
		int entered;
		printf_s("Enter number: ");
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

int declaringArray()
{
	int lineNumber = 0;
	printf("Enter number of collumns:");
	while (scanf_s("%d", &lineNumber) != 1 || lineNumber < 0 || getchar() != '\n')
	{
		printf("Incorrect input! Repeat!");
		rewind(stdin);
	}
	return lineNumber;
}