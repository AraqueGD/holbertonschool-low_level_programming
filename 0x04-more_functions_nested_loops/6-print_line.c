#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 * @n: Parameter
 * Return: Always 0.
 */

void print_line(int n)
{
	int a = 0;

	while (a < n)
	{
		if (n > 0)
		{
			_putchar(95);
			a++;
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
