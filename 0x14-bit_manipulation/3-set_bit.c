#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at index
 * @n: number to change
 * @index: index of bit to change
 *
 * Return: 1 on success, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask, size;

	size = sizeof(n) * 8;
	if (index >= size)
		return (-1);
	mask = 1 << index;
	*n = (*n | mask);
	return (1);
}
