#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - prints buffer in hexa
 * @min: the address of memory to print
 * @max: the size of the memory to print
 * Return: Nothing.
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int res;

	if (min > max)
	{
		return (NULL);
	}
	res = max - min;
	ptr = malloc(sizeof(*ptr) * (res + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = min;
	for (i = 0; i <= res; i++, min++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
