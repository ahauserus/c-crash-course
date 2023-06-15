#include <stdio.h>
#include <stdlib.h>

/**
 * main - Uses malloc() to dynamically allocate memory.
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	int *ptr, n, i;

	n = 10;

	ptr = (int *) malloc(n * sizeof(int));

	if (ptr == NULL)
	{
		printf("Insufficient message\n");
		exit(0);
	}
	else
	{
		printf("The elements of the array are: \n");
		for (i = 0; i < n; i++)
			ptr[i] += 10 + i;
		for (i = 0; i < n; i++)
		{
			printf("%d ", ptr[i]);
		}
		printf("\nThe size of the pointer is %d\n", sizeof(ptr));
		printf("The size of an integer is %d\n", sizeof(int));
	}

	return (0);
}
