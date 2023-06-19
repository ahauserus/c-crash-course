/* #include <stdio.h> */

/**
 * _strlen - returns the length of a string
 * @str: string to be checked
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int i = 1, count = 0;

	while (str[i] != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
