#include "main.h"

/**
 * print_binary - Prints a number in binary
 * @n: Number to print in binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int size = sizeof(n) * 8;
	int bit, i, leading = 1;

	for (i = size - 1; i >= 0; i--)
	{
		bit = n >> i;
		if (bit & 1)
		{
			leading = 0;
			_putchar('1');
		}
		else if (leading == 0)
			_putchar('0');
	}
	if (leading == 1)
		_putchar('0');
}
