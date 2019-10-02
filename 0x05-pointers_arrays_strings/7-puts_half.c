#include "holberton.h"

/**
 * puts_half - check the code for Holberton School students.
 * @str: Parameter
 * Return: Nothing.
 */

void puts_half(char *str)
{
	int a = 0;
	int b = 0;

	while (*(str + a) != '\0')
		a++;
	b = a / 2;
	if (a % 2 == 1)
		b++;
	while (*(str + b) != '\0')
	{
		_putchar(*(str + b));
		b++;
	}
	_putchar('\n');
}
