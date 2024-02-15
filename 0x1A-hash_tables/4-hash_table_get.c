#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Table to retrieve from
 * @key: key to retrives value from
 *
 * Return: value on success, NULL on failure
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}

	return (NULL);
}
