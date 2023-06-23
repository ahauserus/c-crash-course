#include <stdio.h>

/**
 * main - Prints the sife of a pointer variable
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int i = 10;
	int *ptr = &i;

	printf("Size of a pointer: %zu byte(s)\n", sizeof(ptr));
	return (0);
}
