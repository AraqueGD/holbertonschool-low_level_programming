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
	char *ptrS = s;
	int idx = 0;

	for (; *(ptrS + idx) != '\0'; idx++)
	{
		if (*(ptrS + idx) == c)
		{
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		return ('\0');
	}
	else
	{
		return (ptrS + idx);
	}
}
