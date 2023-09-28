#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: string containing binary number
 *
 * Return: value in decimal (unsigned int)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 1;
	unsigned int total = 0;
	int i;
	int len;

	if (!b)
		return (0);
	len = 0;
	while (b[len] != '\0')
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			total += value;
		value *= 2;
	}

	return (total);
}
