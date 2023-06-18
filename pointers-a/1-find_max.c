#include "main.h"

/**
 * find_max - finds the larger number
 * @a: first number
 * @b: second number
 * Return: The larger number
 */

int find_max(int *a, int *b)
{
	int res = *a > *b ? *a : *b;

	return (res);
}
