#include "lists.h"

/**
 * sum_dlistint - check the code for Holberton School students.
 * @head: Parameter Head The nodes.
 * Return: Sum Nodes.
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (head == NULL)
{
return (0);
}
while (head)
{
sum = sum + head->n;
head = head->next;
}
return (sum);
}