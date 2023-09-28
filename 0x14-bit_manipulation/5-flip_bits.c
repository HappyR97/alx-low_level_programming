#include "main.h"

/**
 * flip_bits - Returns number of bits needed to flip
 * to get from one number to another
 * @n: First number
 * @m: Second number
 *
 * Return: number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int count;

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
