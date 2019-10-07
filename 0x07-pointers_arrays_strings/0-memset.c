#include "holberton.h"

/**
 * *_memset - check the code for Holberton School students.
 * @s: Starting address of memory to be filled.
 * @b: Value to be filled.
 * @n: Number of bytes to be filled starting from ptr to be filled.
 * Return: Char.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int idx = 0;
	char *a = s;

	while (idx < n)
	{
		a[idx] = b;
		idx++;
	}
	return (a);
}
