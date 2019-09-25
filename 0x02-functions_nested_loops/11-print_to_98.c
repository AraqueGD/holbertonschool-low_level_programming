#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - check the code for Holberton School students.
 * @n: Integer the 0 to 98
 * Return: Always 0.
 */

void print_to_98(int n)
{
	if (n <= 98)
{
	while (n <= 98)
	{
		if (n == 98)
		{
			printf("%d", n);
		}
		else
		{
			printf("%d, ", n);
		}
		n++;
	}
	printf("\n");
}
	else
	{

	while (n >= 98)
	{
		if (n == 98)
		{
			printf("%d", n);
		}
		else
		{
			printf("%d, ", n);
		}
		n--;
	}
	printf("\n");
}
}
