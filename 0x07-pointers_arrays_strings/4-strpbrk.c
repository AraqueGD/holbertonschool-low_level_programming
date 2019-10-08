#include "holberton.h"

/**
 * _strpbrk - check the code for Holberton School students.
 * @s: Pointer value
 * @accept: Pointer compared
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int idx;

	while (*s != '\0')
	{
		idx = 0;
		while (accept[idx] != '\0')
		{
			if (accept[idx] == *s)
			{
				return (s);
			}
			idx++;
		}
		s++;
	}
	return ('\0');
}
