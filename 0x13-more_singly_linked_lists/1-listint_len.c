#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - check the code for Holberton School students.
 * @h: Parament de List_t.
 * Return: Always 0.
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
