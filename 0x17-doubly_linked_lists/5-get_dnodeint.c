#include "lists.h"

/**
 * get_dnodeint_at_index - check the code for Holberton School students.
 * @head: The Parameter Head the Nodes.
 * @index: The Parameter Number Find node.
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

while (i < index)
{
head = head->next;
i++;
}
return (head);
}