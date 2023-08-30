#include "main.h"

/**
 * _pow_recursion - Calculates the of value of x raised to the power of y
 * @x: number
 * @y: power
 *
 * Return: x to the power of y (int)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
