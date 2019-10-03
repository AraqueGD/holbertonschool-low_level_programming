#include "holberton.h"

/**
 * *string_toupper - check the code for Holberton School students.
 * @up: Parameter.
 * Return: Always 0.
 */

char *string_toupper(char *up)
{
	int i = 0;

	while (*(up + i) != '\0')
	{
		if (*(up + i) >= 97 && *(up + i) <= 122)
			*(up + i) = *(up + i) - 32;
		i++;
	}
	return (up);
}
