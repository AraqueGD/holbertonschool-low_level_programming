#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - check the code for Holberton School students.
 * @s1: String one.
 * @s2: Stgring Two.
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len = 0;
	int idx = 0;
	int idx2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (idx = 0; s1[idx]; idx++)
	{
		len++;
	}
	for (idx = 0; s2[idx]; idx++)
	{
		len++;
	}
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
	{
		return (NULL);
	}
	idx = 0;
	while (s1[idx] != '\0')
	{
		ptr[idx] = s1[idx];
		idx++;
	}
	idx2 = idx;
	idx = 0;
	while (s2[idx] != '\0')
	{
		ptr[idx2] = s2[idx];
		idx++;
		idx2++;
	}
	ptr[idx2] = '\0';
	return (ptr);
}
