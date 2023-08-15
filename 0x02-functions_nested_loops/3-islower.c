#include <unistd.h>
#include "main.h"

/**
 * _islower - Checks if input is a lowercase character
 *
 * Return: if input is lowercase character, return 1. If input is uppercase, return 0.
*/

int _islower(int c)
{
	if(c < 123 && c > 96)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
