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
	char *tmp_value = strdup(value);
	hash_node_t *new_node;

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

	if (ht->array[idx] != NULL)
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
		{
			free(new_node);
			free(ht->array[idx]->value);
			ht->array[idx]->value = tmp_value;
			return (EXIT_SUCCESS);
		}
	}
	new_node->key = strdup(key);
	new_node->value = tmp_value;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (EXIT_SUCCESS);
}
