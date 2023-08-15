#include <unistd.h>
#include "main.h"

/**
 * _islower - Checks if input is a lowercase character
 *@c: ASCII int
 *
 * Return: if input is lowercase character, return 1. Otherwise return 0
*/

int _islower(int c)
{
	if (c < 123 && c > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
