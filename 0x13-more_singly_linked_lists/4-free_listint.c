#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - check the code for Holberton School students.
 * @head: Header the List.
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = aux->next;
		free(aux);
	}
	free(head);
}
