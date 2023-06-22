#include <stdio.h>

/**
 * main - prints pattern 9
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int row, col;

	for (row = 7; row >= 1; row--)
	{
		for (col = 1; col <= row; col++)
			printf("%d  ", col);
		printf("\n");
	}

	return (0);
}
