#include "holberton.h"

/**
 * _strspn - check the code for Holberton School students.
 * @s: Pointer value.
 * @accept: Pointer bytes.
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int veces = 0;
	int idx;

	while (*s != '\0')
	{
		for (idx = 0; accept[idx] != '\0'; idx++)
		{
			if (accept[idx] == *s)
			{
				veces++;
				break;
			}
			else
			{
				if (accept[idx + 1] == '\0')
					return (veces);
			}
		}
		s++;
	}
	return (veces);
}
