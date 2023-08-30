#include "main.h"

/**
 * _sqrt_finder - Function that will find 's', the square root of 'n'
 * @s: the square root to find
 * @n: the number we need to find the square root of
 *
 * Return: Final value of 's' (int)
 */

int _sqrt_finder(int n, int s)
{
	if (s * s == n)
		return (s);
	if (s * s > n)
		return (-1);
	return (_sqrt_finder(n, s + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: the number we need to find the square root of
 *
 * Return: Square root of n (int)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_finder(n, 0));
}
