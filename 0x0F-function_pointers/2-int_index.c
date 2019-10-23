#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - check the code for Holberton School students.
 * @array: Array trhe numbers.
 * @size: Size the Array.
 * @cmp: cmp.
 * Return: Always 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
