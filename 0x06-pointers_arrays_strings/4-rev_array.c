#include "holberton.h"

/**
 * reverse_array - check the code for Holberton School students.
 * @a: First Parameter.
 * @n: Second Parameter.
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int x = 0;
	int *o, *f;
	int aux;

	o = a;
	f = a;
	n -= 1;

	while (i < n)
		i++;
	while (x <= i)
	{
		aux = *(o + x);
		*(o + x) = *(f + i);
		*(o + i) = aux;
		x++;
		i--;
	}
}
