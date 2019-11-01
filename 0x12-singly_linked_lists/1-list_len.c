#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_len - function that prints all the elements of a list_t list
 * @h: header pointer
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			h = h->next;
			len++;
		}
		else
		{
			h = h->next;
			len++;
		}
	}
	return (len);
}
