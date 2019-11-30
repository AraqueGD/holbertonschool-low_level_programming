#include "holberton.h"
/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: input
 * @m: input
 * Return: output
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b;
	int c= 0;

	b = n ^ m;

	while (r != 0)
	{
		c += r & 1;
		r = r >> 1;
	}
	return (c);
}
