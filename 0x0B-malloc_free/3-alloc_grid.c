#include "holberton.h"
#include <stdlib.h>

/**
 * **alloc_grid - prints a grid of integers.
 * @width: width of the grid.
 * @height: height of the grid.
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(ptr + i) = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			while (i-- > 0)
			{
				free(ptr[i]);
				free(ptr);
				return (NULL);
			}
		}
	}
	return (ptr);
}
