#include <stdio.h>

/**
 * main - sorts an array of integers using bubble sort
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{

	int array[10] = {10, 15, -5, -45, 18, 35, 20, 0, 12, 18};
	int i, j, temp;

	for (i = 0; i < sizeof(array) / sizeof(array[0]); i++)
	{
		for (j = 0; j < sizeof(array) / sizeof(array[0]); j++)
		{
			if (array[i] < array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	for (i = 0; i < sizeof(array) / sizeof(array[0]); i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	return (0);
}
