#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int array[7] = {8, 12, 25, 29, 32, 17, 40};
	int n = sizeof(array) / sizeof(array[0]);

	selectionSort(array, n);

	printf("Sorted array\n");

	for (int i = 0; i < n; i++)
		printf("%d ", array[i]);
	printf("\n");

	return (0);
}
