#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int array[3], *ptr, i;

	ptr = &array[0];
	*ptr = 10;
	while (i < sizeof(array) / sizeof(int))
	{
		printf("The address of the array at array[%d] is %p\n", i, ptr);
		printf("The address of ptr is %p\n", &ptr);
		printf("The value the array at a[%d] is %d\n", i, *ptr);
		ptr++;
		i++;
	}
	return (0);
}
