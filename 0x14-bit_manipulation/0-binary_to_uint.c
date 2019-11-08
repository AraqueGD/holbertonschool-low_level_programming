#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - check the code for Holberton School students.
 * @b: Number the Binarys.
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
  unsigned int res = 0;
  int len = 0;
  int exp = 0;

  if (b == NULL)
  {
    return (0);
  }
  len = _strlen(b);
  while (len-- && len >= 0)
  {
    if (b[len] == '1')
    {
      res += _pow(2, exp);
    }
    else if (b[len] != '0')
    {
      return (0);
    }
    exp++;
  }
  return (res);
}

/**
 * _pow - function that returns the value of x
 * raised to the power of y
 * @x: base number
 * @y: pow number
 * Return: int
 */

int _pow(int x, int y)
{
  if (y == 0)
  {
    return (1);
  }
  else if (y < 0)
  {
    return (-1);
  }
  return (x *= _pow(x, y - 1));
}

/**
 * _strlen - check the code for Holberton School students.
 * @s: Parameter.
 * Return: Always 0.
 */

int _strlen(const char *s)
{
  const char *str;
  int num = 0;

  str = s;
  while (*str != '\0')
  {
    num++;
    str++;
  }
  return (num);
}