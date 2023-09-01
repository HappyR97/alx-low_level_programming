#include <unistd.h>
#include "main.h"

/**
 * _isalpha - check if input is alphabetic.
 * @c: ASCII int
 *
 * Return: 1 if alphabetic, otherwise 0.
*/

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
