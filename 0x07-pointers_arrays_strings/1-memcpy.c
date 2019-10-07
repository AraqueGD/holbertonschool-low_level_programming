#include "holberton.h"

/**
 * _memcpy - check the code for Holberton School students.
 * @dest: destination variable.
 * @src: origin variable.
 * @n: number bytes from memory area.
 * Return: Retrun dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *s = src;
        char *d = dest;
	unsigned int idx = 0;

	for (idx = 0; idx < n; idx++)
	{
		d[idx] = s[idx];
	}
	return (d);
}
