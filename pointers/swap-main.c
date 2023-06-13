#include "main.h"
#include <stdio.h>


/**
 * main - Entry point of the program
 * Return: 0 is success, 1 otherwise
 */


int main(void)
{
	int a = 10, b = 5;

	printf("Numbers before swap: a = %d, b = %d\n", a, b);

	swap_int(&a, &b);
	printf("Numbers after swap: a = %d, b = %d\n", a, b);

	return (0);
}
