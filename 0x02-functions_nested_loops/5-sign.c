#include "holberton.h"

/**
 * print_sign - check the code for Holberton School students.
 * @n: checkout function.
 * Return: 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
