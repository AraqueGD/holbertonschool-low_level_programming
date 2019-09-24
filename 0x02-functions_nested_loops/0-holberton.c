#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n = 0;
	char str_hol[9] = "Holberton";

	while (n < 9)
	{
		_putchar(str_hol[n]);
		n++;
	}
	_putchar('\n');
	return (0);
}
