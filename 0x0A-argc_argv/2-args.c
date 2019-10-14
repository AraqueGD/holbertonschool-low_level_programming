#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argunment vector
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i;

	if(argc > 0)
	{
		for(i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);

		}
	}
	return (0);
}
