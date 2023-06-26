#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @arr: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int arr[], int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}
}
