#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @seperator: string that seperates arg str(s)
 * @n: Number of str arguments
 *
 * Return: void
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (seperator && i != (n - 1))
			printf("%s", seperator);
	}
	printf("\n");
}
