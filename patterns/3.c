#include <stdio.h>

/**
 * main - Prints pattern 3
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int row, cols;

	for (row = 1; row <= 7; row++)
	{
		for (cols = 7; cols >= row; cols--)
		{
			printf(" * ");
		}
		printf("\n");
	}

	return (0);
}
