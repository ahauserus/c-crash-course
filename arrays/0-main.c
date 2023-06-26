#include <stdio.h>
#include "main.h"

/**
 * main - Checks the code
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int array[] = {24, 35, 12, 10, 87, 91, 11};
	int n = sizeof(array) / sizeof(array[0]);

	printf("The array elements are:\n");

	for (int i = 0; i < n; i++)
		printf("%d ", array[i]);
	printf("\n");

	printf("After reversing the array:\n");
	reverse_array(array, n);

	for (int i = 0; i < n; i++)
		printf("%d ", array[i]);
	printf("\n");


	return (0);
}
