#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - check the code for Holberton School students.
 * @grid: free memory.
 * @height: array.
 * Return: Always 0.
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i++]);
		free(grid);
	}
}
