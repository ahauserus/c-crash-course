#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int array[10] = {25, 10, 19, 16, -6, -14, 12, 10, 3, 1};
	int n = sizeof(array) / sizeof(array[0]);

	bubbleSort(array, n);

	printf("Sorted array:\n");

	for (int i = 0; i < n; i++)
		printf("%d ", array[i]);
	printf("\n");

	return (0);
}
