#include "holberton.h"

/**
 * _strcpy - check the code for Holberton School students.
 * @dest: First Parameter.
 * @src: Second Parameter.
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
