#include "holberton.h"

/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int j;
	char str_alphabet_x10[26] = "abcdefghijklmnopqrstuvwxyz";

	while (i < 10)
	{
		j = 0;
		while (j <= 26)
		{
			_putchar(str_alphabet_x10[j]);
			j++;
		}
	_putchar('\n');
	i++;
	}
}
