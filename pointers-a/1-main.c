#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int a = 10, b = 9;

	printf("%d\n", find_max(&a, &b));

	return (0);
}
