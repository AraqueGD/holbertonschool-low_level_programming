#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int y;
int x;
srand(time(0));
y = rand() - RAND_MAX / 2;
x = y % 10;
if (x > 5)
printf("Last digit of %d is %d and is greater than 5\n",y, x);
else if (x == 0)
printf("Last digit of %d is %d and is 0\n", y, x);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", y, x);
return (0);
}
