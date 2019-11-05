#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - check the code for Holberton School students.
 * @head: Pointer the list.
 * Return: Always 0.
 */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *aux = NULL;

	if (*head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	aux = (*head)->next;
	free(*head);
	*head = aux;

	return (n);
}
