#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int rows, cols, size;

	size = 7;

	for (rows = 1; rows <= size; rows++)
	{
		for (cols = 1; cols <= rows; cols++)
			printf("* ");
	printf("\n");
	}

	return (0);
}
