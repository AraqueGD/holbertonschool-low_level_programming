#include "holberton.h"

/**
 * _strchr - check the code for Holberton School students.
 * @s: Pointer.
 * @c: Character find.
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{

	for (; s[0] != '\0'; s++)
	{
		if (s[0] == c)
		{
			break;
		}
	}
	return (s);
}
