#include "holberton.h"

/**
 * _strchr - check the code for Holberton School students.
 * @s: Pointer.
 * @c: Character find.
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int flag = 0;

	for (; s[0] != '\0'; s++)
	{
		if (s[0] == c)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0) s = '\0';
	return (s);
}
