#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all arguments it receives
 * @argc: argument count
 * @argv: argunment vector
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i, n1, n2, rta;

	i = n1 = n2 = rta = 0;
	if (argc > 0)
	{
		while (i < argc)
		{
			if (argc == 3)
			{
				if (i == 1)
					n1 = atoi(argv[i]);
				else if (i == 2)
					n2 = atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			rta = (n1 * n2);
			i++;
		}
		printf("%d\n", rta);
	}
	return (0);
}
