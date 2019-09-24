#include "holberton.h"

/**
 * _abs - check the code for Holberton School students.
 * @i: abs absolut value
 * Return: Always i.
 */

int _abs(int i)
{
	if (i < 0)
	{
		i = i * (-1);
		return (i);
	}
	else
		return (i);
}
