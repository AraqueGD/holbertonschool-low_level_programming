#include "holberton.h"

/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s: Pointer to strlen.
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		int len = _strlen_recursion(s + 1);

		return (++len);
	}
	return (0);
}
