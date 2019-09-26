#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int a = 0;
	int c = 0;

	while (a < 10)
	{
		while (c <= 14)
		{
			if (c > 9)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
			c++;
		}
		c = 0;
		_putchar('\n');
		a++;
	}

}
