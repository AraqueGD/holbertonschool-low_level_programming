#include "holberton.h"

/**
 * print_rev - check the code for Holberton School students.
 * @s: Parameter
 * Return: Nothing.
 */

void print_rev(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
		n++;
	n++;
	while (n >= 0)
	{
		_putchar(*(s + n));
		n--;
	}
	_putchar('\n');
}
