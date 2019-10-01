#include "holberton.h"

/**
 * swap_int - check the code for Holberton School students.
 *
 * @a: First Parameter
 * @b: Second Parameter
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
