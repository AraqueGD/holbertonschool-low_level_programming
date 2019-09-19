#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int x = 'a';
while (x <= 'z')
{
if (x == 'q' || x == 'e')
{
x += 1;
}
else
{
putchar(x);
x++;
}
}
putchar('\n');
return (0);
}
