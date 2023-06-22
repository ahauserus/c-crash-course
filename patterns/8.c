#include <stdio.h>

/**
 * main - Prints pattern 8
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col <= row; col++)
		{
			printf("%d  ", col);
		}
		printf("\n");
	}
	printf("\n");
	return (0);
}
