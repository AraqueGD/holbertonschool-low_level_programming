#include "holberton.h"

/**
 * print_last_digit - check the code for Holberton School students.
 * @a: Checkout last digit
 * Return: a.
 */

int print_last_digit(int a)
{
	a %= 10;

	if (a < 0)
	   a *= -1;

	_putchar('0' + a);
	return (a);

}
