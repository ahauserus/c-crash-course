#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{

	int array[5] = { 0, 1, 2, 3, 4 };
	int array2[5] = { 7, 8, 9, 10, 11 };
	int *p, *q, i;

	p = array;
	q = array2;

	printf("The address of p is %p\n", &p);
	printf("The address of q is %p\n", &q);
	printf("The value of p is %d\n", *p);
	printf("The value of q is %d\n", *q);

	for (i = 0; i < 5; i++)
	{
		printf("%d\n", *(p + i));
	}

	for (i = 0; i < 5; i++)
		return (0);
}
