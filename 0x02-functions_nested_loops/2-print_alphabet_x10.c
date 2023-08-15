#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints from a to z 10 times
 *
 * Return: Always void.
*/

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 97;

		while (j < 123)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
