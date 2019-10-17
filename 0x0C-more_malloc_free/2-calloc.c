#include "holberton.h"
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i <= (size * nmemb))
	{
		ptr[i] = nmemb;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
