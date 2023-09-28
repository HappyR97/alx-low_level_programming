#include "main.h"

/**
 * get_bit - retuns value of a bit at a given index
 * @n: the number to us
 * @index: the index of the bit to return
 *
 * Return: bit (int)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;
	int bit;
	unsigned int size;

	size = sizeof(n) * 8;
	if (index >= size)
		return (-1);
	mask = 1 << index;
	bit = (n & mask) >> index;
	return (bit);
}
