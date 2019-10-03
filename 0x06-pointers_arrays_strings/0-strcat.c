#include "holberton.h"

/**
 * _strcat - check the code for Holberton School students.
 * @dest: First Parameter
 * @src: Second Parameter
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
		return (dest);
}
