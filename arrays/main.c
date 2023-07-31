#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int array[10] = {12, 59, 96, 23, 35, 89, 25, 197, -25, 0};
	int array2[5] = {48, 97, 73, 21, 89};
	int i = 96, j = 48;

	find_key(array, i, 10);
	find_key(array2, j, 5);

	return (0);
}
