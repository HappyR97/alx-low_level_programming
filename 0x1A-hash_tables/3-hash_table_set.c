#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: hash table to add to
 * @key: key of element to add
 * @value: value of element to add
 *
 * Return: 1 if success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (!ht || !key || !*key || !value || !ht->array)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
