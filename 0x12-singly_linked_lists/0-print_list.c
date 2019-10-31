#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code for Holberton School students.
 * @h: Parament de List_t.
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while(h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			i++;
		}
		else
		{
			printf("[%u]" "%s\n", h->len, h->str);
			h = h->next;
			i++;
		}
	}
	return (i);
}
