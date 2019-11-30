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

	while (b != 0)
	{
		c += b & 1;
		b = b >> 1;
	}
	return (c);
}
