#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 * @n: Parameter
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	while (a < n)
	{
		while (b <= a)
		{
			if (b != a)
				_putchar(' ');
		else
			_putchar(92);
			b++;
		}
	_putchar('\n');
	a++;
	b = 0;
	}
	if (n <= 0)
		_putchar('n');
}
