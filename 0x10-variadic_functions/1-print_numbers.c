#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by new line
 * @seperator: the string that will seperate our printed numbers
 * @n: Number of int arguments to print
 *
 * Return: void
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	int x;

	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (seperator && i != (n - 1))
			printf("%s", seperator);
	}
	printf("\n");
}
