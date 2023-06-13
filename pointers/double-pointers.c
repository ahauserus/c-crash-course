#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int a = 10, *p, **pp;

	p = &a;
	pp = &p;

	printf("The value of a is %d\n", *p);
	printf("The value of a is %d\n\n", **pp);

	printf("The address of a is %p\n", &p);
	printf("The address of a is %p\n\n", &(*pp));

	printf("The value of p is %p\n", p);
	printf("The value of p is %p\n", *pp);
	printf("The value of p is %p\n\n", &**pp);




	return (0);
}
