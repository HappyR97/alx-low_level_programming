#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints all elements of array
 * @a: Array to use
 * @n: Number of elements to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n >= 0)
	{
		while (i < n)
		{
			printf("%d", a[i]);

			if (i != n - 1)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
			i++;
		}
	}
}
