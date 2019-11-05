#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - check the code for Holberton School students.
 * @head: Double Pointer.
 * Return: Always 0.
 */

void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (!head)
	{
		return;
	}
	while (*head != NULL)
	{
		aux = (*head)->next;
		free(*head);
		*head = aux;
	}
}
