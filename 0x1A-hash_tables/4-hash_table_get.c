#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: Hash Table.
 * @key: Input Key.
 * Return: Value.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp_node = NULL;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	idx = key_index((unsigned char *)key, ht->size);

	tmp_node = ht->array[idx];
	while (tmp_node)
	{
		if (strcmp(tmp_node->key, key) == 0)
		{
			return (tmp_node->value);
		}
		tmp_node = tmp_node->next;
	}
	return (NULL);
}
