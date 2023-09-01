#include <unistd.h>
#include "main.h"

/**
 * _abs - computes absolute value
 * @i: Input int to compute
 *
 * Return: Absolute value of int
*/

int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
}
