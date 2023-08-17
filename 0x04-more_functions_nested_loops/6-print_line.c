#include "main.h"

/**
 * print_line - Draws straight line in the terminal
 * @n: number of lines
 *
 * Return: Void.
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i = 0;

		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
