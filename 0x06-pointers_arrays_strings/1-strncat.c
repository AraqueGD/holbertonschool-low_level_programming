#include "holberton.h"

/**
 * _strncat - check the code for Holberton School students.
 * @dest: First Parameter.
 * @src: Second Parameter.
 * @n: Third Parameter.
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	unsigned int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		if (j < n)
		{
			*(dest + i) = *(src + j);
			i++;
		}
		j++;
	}
	return (dest);
}
