#include "holberton.h"

/**
 * puts2 - check the code for Holberton School students.
 *
 * @str: Parameter
 * Return: nothing.
 */

void puts2(char *str)
{

	while (*str != '\0')
	{
		if (*str % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}
