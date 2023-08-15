#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - Gets last digit from an int
 * @i: int from which to get last digit
 *
 * Return: i % 10;
*/

int print_last_digit(int i)
{
	if (i >= 0)
	{
		_putchar((i % 10) + '0');
		return (i % 10);
	}
	else
	{
		_putchar(-(i % 10) + '0');
		return (-(i % 10));
	}
}
