#include "hash_tables.h"

/**
 * key_index - Gives index of a key
 * @key: the key to search for
 * @size: size of the array of the hash table
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
