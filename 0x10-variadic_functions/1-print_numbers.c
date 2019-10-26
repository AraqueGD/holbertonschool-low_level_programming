#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - check the code for Holberton School students.
 * @n: conts.
 * @separator: Pointer.
 * Return: int.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != 0 || n != 0)
	{
		va_list arguments;
		unsigned int i;
		int aux = 0;

		va_start(arguments, n);
		for (i = 0; i < n; i++)
		{
			aux = va_arg(arguments, int);
			if (separator == NULL)
				printf("%s", separator);
			else if (i == n - 1)
				printf("%d", aux);
			else
				printf("%d%s", aux, separator);
		}
		printf("\n");
		va_end(arguments);
	}

}
