#include "holberton.h"

/**
 * _strchr - check the code for Holberton School students.
 * @s: Pointer.
 * @c: Character find.
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int idx;

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		if (s[idx] == c)
			return (s + idx);
	}

	return ('\0');
}
