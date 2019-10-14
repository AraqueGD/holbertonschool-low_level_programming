#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: argument count.
 * @argv: argunment vector.
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		argv = argv;
		printf("%d\n", argc - 1);
	}
	return (0);
}
