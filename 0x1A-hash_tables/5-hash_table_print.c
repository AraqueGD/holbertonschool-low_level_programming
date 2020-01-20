#include "hash_tables.h"

/**
 * hash_table_print - check the code for Holberton School students.
 * @ht: Hash Table
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *tmp_node = NULL;
	int flag = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			tmp_node = ht->array[idx];
			while (tmp_node != NULL)
			{
				if (!(flag == 0))
				{
					printf(", ");
				}
				printf("'%s': '%s'", tmp_node->key, tmp_node->value);
				flag = 1;
				tmp_node = tmp_node->next;
			}
		}
	}
	printf("}\n");
}
