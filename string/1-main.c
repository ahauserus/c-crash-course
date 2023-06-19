#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * Return: 0 is success, 1 otherwise
 */

int main(void)
{
	char *str1, *str2;

	str1 = "And the game finally did settle. And Betty and C did win";
	str2 = "Without love and war, no games could be played.";

	printf("%d\n", _strlen(str1));
	printf("%d\n", _strlen(str2));

	return (0);
}
