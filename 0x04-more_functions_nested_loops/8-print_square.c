#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_square(int size)
{
	int c, f;

	if (size > 0)
	{
		for (f = 0; f < size; f++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
