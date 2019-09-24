#include "holberton.h"

/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: nothing.
 */

void print_alphabet(void)
{
int x = 0;
char str_alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

while (x < 26)
{
_putchar(str_alphabet[x]);
x++;
}
_putchar('\n');
}
