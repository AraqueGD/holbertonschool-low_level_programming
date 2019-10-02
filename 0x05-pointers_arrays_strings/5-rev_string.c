#include <stdio.h>
#include "holberton.h"

/**
 * rev_string - check the code for Holberton School students.
 * @s: Parameter
 * Return: Nothing.
 */

void rev_string(char *s)
{
	char c1, c2;
	char *p1, *p2;

	p1 = s;
	p2 = s+=8;
	while (p1 != p2){
		c1 = *p1;
		c2 = *p2;
		s =  p1;
		*s =  c2;
		s =  p2;
		*s =  c1;
		p1++;
		p2--;
	}
}
