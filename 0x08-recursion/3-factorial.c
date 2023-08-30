#include "main.h"

/**
 * factorial - Calculates factorial of a given number
 * @n: Number to calculate factorial of
 *
 * Return: n! (int)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n - 1));
}
