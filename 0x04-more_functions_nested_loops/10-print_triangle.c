#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line
 * @size: size of the triangle
 * Return: Void.
 */

void print_triangle(int size)
{
	int i = 0;
	int j;
	int k;

	if (size > 0)
	{
		while (i < size)
		{
			j = size;
			k = 1;
			while (j > i + 1)
			{
				_putchar(' ');
				j--;
			}
			while (k <= i + 1)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
