#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: the integer to print.
 * @size: size the bytes.
 * @action: Pointer to a function.
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || size <= 0 || action == NULL)
	{
		return;
	}
	else
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
