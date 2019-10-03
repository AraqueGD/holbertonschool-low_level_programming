#include "holberton.h"

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: First Parameter.
 * @s2: Second Parameter.
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int rta;

	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) > *(s2 + i))
		{
			rta = *(s1 + i) - *(s2 + i);
			return (rta);
		}
		else if (*(s1 + i) < *(s2 + i))
		{
			rta = *(s1 + i) - *(s2 + i);
			return (rta);
		}
		i++;
	}
	return (0);
}
