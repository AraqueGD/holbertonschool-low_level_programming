#include "holberton.h"

/**
 * _strlen - check the code for Holberton School students.
 * @s: Parameter.
 * Return: Always 0.
 */

int _strlen(char *s)
{
	char *str;
	int num = 0;

	str = s;
	while (*str != '\0')
	{
		num++;
		str++;
	}
	return (num);
}
