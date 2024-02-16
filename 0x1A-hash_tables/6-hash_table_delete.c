#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: table to delete
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current_node, *ptr;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			ptr = current_node;
			current_node = current_node->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
		}
	}
	free(ht->array);
	free(ht);
}
