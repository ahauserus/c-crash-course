#include <stdio.h>


/**
 * sort_array - Sorts an array of integers in ascending order
 * @array: The array to be sorted
 */

void sort_array(int array[])
{
	int i, j, size = sizeof(array) / sizeof(int);
	int temp;
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}


/**
 * main - Searches for a number in a sorted array using binary search
 * Return: Always 0
 */

int main(void)
{
	int array[11] = {10, 15, -5, -45, 18, 35, 20, 0, 12, 22, 13};

	sort_array(array);

	int size = sizeof(array) / sizeof(int);
	int flag, mid, low = 0, high = size - 1;
	int key = 13;



	while (low <= high)
	{
		mid = (low + high) / 2;
		if (key == array[mid])
		{
			printf("%d found at postiion %d\n", key, mid + 1);
			flag = 1;
			break;
		}
		else if (key < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	if (flag == 0)
		printf("%d not found\n", key);

	return (0);
}







