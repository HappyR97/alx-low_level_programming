#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: Number of arguments
 *
 * Return: sum of all parameters (int)
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x;
	int sum = 0;

	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
