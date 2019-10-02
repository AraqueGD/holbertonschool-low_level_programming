#include "holberton.h"
#include <stdio.h>

/**
 * print_array - check the code for Holberton School students.
 * @a: First Parameter
 * @n: Second Parameter
 * Return: Nothing.
 */

void print_array(int *a, int n)
{
	int count = 0;

	if (n > 0)
	{
		while (count < n)
		{
			printf("%d", a[count]);
			if (count < n - 1)
				printf(", ");
			count++;
		}
	}
		printf("\n");
}
