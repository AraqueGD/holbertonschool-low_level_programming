#include "holberton.h"

/**
 * _islower - the character functions for lowcase.
 * @c: Checkout input yo caracter
 * Return: int.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
