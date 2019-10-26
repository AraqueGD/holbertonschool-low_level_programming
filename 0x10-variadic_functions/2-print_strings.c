#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings  - check the code for Holberton School students.
 * @n: Number Numbers
 * @separator: String.
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
		va_list arguments;
		unsigned int i;
		char *ptr;

		va_start(arguments, n);
		for (i = 0; i < n; i++)
		{
			ptr = va_arg(arguments, char *);
			if (ptr == NULL)
				printf("(nil)");
			else
			{
				if (i < (n - 1) && separator != NULL)
				{
					printf("%s%s", ptr, separator);
				}
				else
				{
					printf("%s", ptr);
				}
			}
		}
		printf("\n");
		va_end(arguments);
}
