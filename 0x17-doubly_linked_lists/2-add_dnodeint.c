#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *Newnode = NULL;
    Newnode = malloc(sizeof(dlistint_t));
    if (Newnode == NULL)
    {
        printf("No se pudo Asignar Memoria...");
        return (NULL);
    }
    if ((*head) == NULL)
    {
        Newnode->n = n;
        Newnode->next = NULL;
        Newnode->prev = NULL;
        (*head) = Newnode;
    }
    else
    {
        Newnode->n = n;
        Newnode->next = *head;
        Newnode->prev = NULL;
        (*head)->prev = Newnode;
        *head = Newnode;
    }
    return (Newnode);
}
