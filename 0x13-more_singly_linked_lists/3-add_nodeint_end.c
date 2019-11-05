#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the beginning of
 * a listint_t list.
 * @head: header pointer
 * @n: int data type
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_node, *aux;

	add_node = malloc(sizeof(listint_t));
	if (add_node == NULL)
	{
		return (NULL);
	}
	add_node->n = n;
	add_node->next = NULL;
	if (*head == NULL)
	{
		*head = add_node;
	}
	else
	{
		aux = *head;
		while (aux->next)
		{
			aux = aux->next;
		}
		aux->next = add_node;
	}
	return (add_node);

}
