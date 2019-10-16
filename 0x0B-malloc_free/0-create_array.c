#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - prints buffer in hexa
 * @c: String.
 * @size: the size of the memory to print.
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(*ptr) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i <= size - 1)
	{
		ptr[i] = c;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
