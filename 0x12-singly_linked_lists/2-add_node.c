#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - check the code for Holberton School students.
 * @head: Double Pointer.
 * @str: Pointer.
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add_new;

	add_new = malloc(sizeof(list_t));
	if (add_new == NULL)
	{
		return (NULL);
	}
	add_new->len = _strlen(str);
	add_new->str = strdup(str);
	add_new->next = *head;
	*head = add_new;
	return (add_new);
}

/**
 * _strlen - check the code for Holberton School students.
 * @s: Parameter.
 * Return: Always 0.
 */

int _strlen(const char *s)
{
	const char *str_node;
	int num = 0;

	str_node = s;
	while (*str_node != '\0')
	{
		num++;
		str_node++;
	}
	return (num);
}
