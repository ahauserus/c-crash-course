#include <stdio.h>

/**
 * selectionSort - sorts an array of integers using selection sort.
 * @array: array to be sorted.
 * @n: number of elements in the array / size of the array.
 */

void selectionSort(int array[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;

		for (int j = i + 1; j < n; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		int temp = array[i];

		array[i] = array[min];
		array[min] = temp;
	}
}
