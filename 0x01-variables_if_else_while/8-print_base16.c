#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int numero;
	int letra;

	for (numero = '0'; numero <= '9'; numero++)
	{
		putchar(numero); }
	for (letra = 'a'; letra <= 'f'; letra++)
	{
		putchar(letra); }
	putchar('\n');
	return (0);
}
