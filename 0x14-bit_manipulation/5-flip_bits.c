#include "main.h"

/**
 * flip_bits - Returns number of bits needed to flip
 * to get from one number to another
 * @n: Number to flip from
 * @m: Number to flip to
 *
 * Return: number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int result, count;

	result = n ^ m;
	count = 0;

	while (result != 0)
	{
		if (result & 1)
			count++;
		result = result >> 1;
	}

	return (count);
}
