#include "holberton.h"
#include <stdlib.h>

/**
 * *_strdup - check the code for Holberton School students.
 * @str: String.
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len]; len++)
	{
		len++;
	}
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i <= len)
	{
		ptr[i] = str[i];
		i++;
	}

	return (ptr);
}
