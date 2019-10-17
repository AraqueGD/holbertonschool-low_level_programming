#include "holberton.h"
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(*ptr) * (max - min) + 2);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = min;
	for(i = 0; min <= max; i++, min++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
