#include <stdio.h>

/**
 * main - Searches for an ite, in an array using linear search
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int array[10] = {10, 15, -5, -45, 18, 35, 20, 0, 12, 22};
	int size = sizeof(array) / sizeof(array[0]), i, flag;
	int key = -45;

	for (i = 0; i < size; i++)
	{
		if (key == array[i])
		{
			flag = 1;
			break;
		}
	}

	if (flag == 1)
		printf("%d found at postiion %d\n", key, i + 1);
	else
		printf("%d not found\n", key);

	return (0);
}
