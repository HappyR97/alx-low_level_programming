#include <unistd.h>
#include "main.h"

/**
 * print_sign - prints sign of number
 * @n: Int to get sign of
 *
 * Return: 1 if > 0, 0 if zero, -1 if < 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
