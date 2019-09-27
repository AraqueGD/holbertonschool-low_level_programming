#include "holberton.h"

/**
 * print_triangle - check the code for Holberton School students.
 * @size: Parameter of size
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int f, c, a;

	if (size > 0)
	{
		for (f = 0; f < size; f++)
		{
			for (c = 0; c < size; c++)
			{
				a = (size - f) - 1;
				if (c < a)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
