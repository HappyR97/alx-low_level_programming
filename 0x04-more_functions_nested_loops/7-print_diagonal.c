#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: number of times \ should be printed
 *
 * Return: Void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 0;

		while (i < n)
		{
			int j = 0;

			while (j <= i - 1)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
