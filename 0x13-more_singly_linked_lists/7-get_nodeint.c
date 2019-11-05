#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * *get_nodeint_at_index - check the code for Holberton School students.
 * @index: index the node.
 * Return: Always 0.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *aux;

	while (head != NULL)
	{
		aux = head;
		if (n == index)
			return (aux);
		head = head->next;
		n++;
	}
	return (NULL);
}
