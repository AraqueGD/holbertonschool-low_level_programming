#include "holberton.h"

/**
 * _isalpha - the character functions for lowcase.
 * @c: Checkout input you caracter
 * Return: int.
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
