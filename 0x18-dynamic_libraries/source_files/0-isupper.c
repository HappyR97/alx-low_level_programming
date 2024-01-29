#include "main.h"

/**
 * _isupper - checks for if int c is an uppercase char
 * @c: integer to check
 * Return: 1 if c is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
