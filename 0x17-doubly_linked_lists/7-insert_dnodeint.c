#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code for Holberton School students.
 * @h: The Parameter Head the Nodes.
 * @idx: The Parameter Number Find node.
 * @n: Parameter Data Node.
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *NewNode = NULL;
dlistint_t *pTmp = *h;
unsigned int pos = 0;

if (idx == 0)
return (add_dnodeint(h, n));

NewNode = malloc(sizeof(dlistint_t));
if (NewNode == NULL)
return (NULL);

while (pos < idx)
{
if (pTmp->next == NULL)
return (NULL);
pTmp = pTmp->next;
pos++;
}

NewNode->n = n;
NewNode->next = NULL;
NewNode->prev = NULL;

NewNode->prev = pTmp->prev;
NewNode->next = pTmp;

pTmp->prev->next = NewNode;
pTmp->prev = NewNode;

return (NewNode);
}
