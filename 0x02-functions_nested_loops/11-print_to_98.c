#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints digits until reaching 98
 * @n: starting int
 *
 * Return: void
*/

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("98");
		printf("\n");
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98");
		printf("\n");
	}
	else
	{
		printf("98");
		printf("\n");
	}
}
