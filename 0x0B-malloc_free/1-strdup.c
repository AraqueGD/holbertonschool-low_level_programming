#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - check the code for Holberton School students.
 * @str: String.
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int len = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * len);
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
