#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @arr: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int arr[], int n)
{
	int i, j, temp;

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
}
