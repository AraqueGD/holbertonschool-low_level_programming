#include "lists.h"

/**
 * *add_dnodeint_end - check the code for Holberton School students.
 * @head: The Parameter head the nodes.
 * @n: The Parameter Data Node.
 * Return: The Print Nodes.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *Newnode = NULL;
dlistint_t *tmp = (*head);

Newnode = malloc(sizeof(dlistint_t));
if (Newnode == NULL)
{
printf("No se realizo Asignación de Memoria");
return (NULL);
}
Newnode->n = n;
Newnode->prev = NULL;
Newnode->next = NULL;

if ((*head) == NULL)
{
(*head) = Newnode;
return (Newnode);
}
while (tmp->next)
{
tmp = tmp->next;
}
tmp->next = Newnode;
Newnode->prev = tmp;
return (Newnode);
}
