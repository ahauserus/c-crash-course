#include <stdio.h>

/**
 * main - prints pattern 10
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int row, col;

	for (row = 1; row <= 7; row++)
	{
		for (col = 7; col >= row; col--)
			printf("%d  ", col);
		printf("\n");
	}

	return (0);
}
