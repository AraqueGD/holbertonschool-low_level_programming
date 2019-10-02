#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - check the code for Holberton School students.
 * @s: Parameter
 * Return: Nothing.
 */

void rev_string(char *s)
{
	int p1 = 0;
	int p2 = 0;
	char c1 = ' ';
	char c2 = ' ';

	p2 = sizeof(s) / sizeof(s[0]);
	while (p1 != p2)
	{
		c1 = s[p1];
		c2 = s[p2];

		s[p1++] = c2;
		s[p2--] = c1;
	}
}
