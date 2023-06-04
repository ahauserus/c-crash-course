#include <stdio.h>

/**
 * main - sorts an array of integers in ascending order with selection sort
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int array[10] = {10, 15, -5, -45, 18, 35, 20, 0, 12, 18};
	int i, j, min;

	for (i = 0; i < sizeof(array) / sizeof(array[0]); i++)
	{
		min = i;
		for (j = i + 1; j < sizeof(array) / sizeof(array[0]); j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		int temp = array[i];

		array[i] = array[min];
		array[min] = temp;
	}
	for (i = 0; i < sizeof(array) / sizeof(array[0]); i++)
		printf("%d ", array[i]);
	printf("\n");
	return (0);
}
