#include <stdio.h>

/**
 * find_key - finds a key in an array
 * @arr: array to search
 * @key: key to search for
 * @size: size of the array
 *
 * Return: 1 if key is found, 0 otherwise
 */

int find_key(int *arr[], int key, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (*arr[i] == key)
			return (1);
	}

	return (0);
}
