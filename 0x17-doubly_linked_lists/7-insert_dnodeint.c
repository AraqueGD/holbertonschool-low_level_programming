#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *NewNode = NULL;
dlistint_t *pTmp = *h;
unsigned int pos = 0;

if (idx == 0)
return (add_dnodeint(h, n));

NewNode = (dlistint_t *)malloc(sizeof(dlistint_t));
if (NewNode == NULL)
return (NULL);

while (pTmp->next != NULL && pos < idx)
{
pTmp = pTmp->next;
pos++;
}

if (pTmp->next == NULL)
return (add_dnodeint_end(h, n));

NewNode->n = n;
NewNode->next = NULL;
NewNode->prev = NULL;

NewNode->prev = pTmp->prev;
NewNode->next = pTmp;

pTmp->prev->next = NewNode;
pTmp->prev = NewNode;

return (NewNode);
}
