#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int a = 10, *ptr;

	printf("The value of variable a is %d\n", a);
	printf("The address of variable a is %p\n", &a);

	ptr = &a;

	printf("The value of variable a is %d\n", *ptr);
	printf("The address of variable a is %p\n", ptr);
	printf("The address of variable a can also be %p\n", *(&ptr));
	return (0);
}
