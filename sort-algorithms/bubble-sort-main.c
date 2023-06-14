#include <stdio.h>

/**
 * bubbleSort - sorts an array of integers in using bubble sort
 * @array: array of integers to sort
 * @n: size of the array
 * Return: 0 is success, 1 otherwise
 */

void bubbleSort(int array[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];

				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
