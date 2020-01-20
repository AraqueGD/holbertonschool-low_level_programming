#include "hash_tables.h"

/**
 *  hash_table_delete - check the code for Holberton School students.
 * @ht: Hash table.
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp_node = NULL;
	unsigned long int idx;
	hash_node_t *curr = NULL;

	if (ht == NULL)
	{
		return;
	}

	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			tmp_node = ht->array[idx];
			while (tmp_node != NULL)
			{
				curr = tmp_node;
				free(curr->key);
				if (curr->value != NULL)
				{
					free(curr->value);
				}
				tmp_node = tmp_node->next;
				free(curr);
			}
		}
	}
	free(ht->array);
	free(ht);
}
