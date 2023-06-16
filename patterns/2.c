#include <stdio.h>

/**
 * main - Entry point. Prints pattern 2 of the README file
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int rows, cols, size;

	size = 7;

	for (rows = 1; rows <= size; rows++)
	{
		for (cols = size; cols >= rows; cols--)
			printf("* ");
		printf("\n");
	}
	return (0);
}
