#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @key: Key the Value Table Hash
 * @value: Value the Table Hash
 * @ht: Table Hash
 * Return: Int.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new_node, *tmp_node;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
	{
		return (EXIT_FAILURE);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (EXIT_FAILURE);
	}
	idx = key_index((unsigned char *)key, ht->size);

	tmp_node = ht->array[idx];
	while (tmp_node != NULL)
	{
		if (strcmp(tmp_node->key, key) == 0)
		{
			free(new_node);
			free(tmp_node->value);
			tmp_node->value = strdup(value);
			if (tmp_node->key == NULL)
			{
				return (EXIT_FAILURE);
			}
			return (EXIT_SUCCESS);
		}
		tmp_node = tmp_node->next;
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (EXIT_SUCCESS);
}
