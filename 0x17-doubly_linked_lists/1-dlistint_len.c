#include "lists.h"

/**
 * dlistint_len - Function Print Number Nodes.
 * @h: Parameter the *Head.
 * Return: Number Nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
  size_t count = 0;

  while (h)
  {
  h = h->next;
  count++;
  }
  return (count);
}
