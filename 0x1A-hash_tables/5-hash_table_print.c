#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: table to print
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			printf("\'%s\':\'%s\'", current_node->key, current_node->value);
			current_node = current_node->next;
			if (current_node != NULL)
				printf(", ");
		}
		if (ht->array[i + 1])
			printf(", ");
	}
	printf("}\n");
}
