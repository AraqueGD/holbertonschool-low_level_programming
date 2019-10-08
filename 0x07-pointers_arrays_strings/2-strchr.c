#include "holberton.h"
#include <stdio.h>

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
	int idx;
	char *ptrAux = s;

	for (idx = 0; ptrS[idx] != '\0'; idx++)
	{
		if (ptrS[idx] == c)
		{
			flag = 1;
			break;
		}
		ptrAux++;
	}
	if (flag == 0)
	{
		return (NULL);
	}
	else
	{
		return (ptrAux);
	}
}
