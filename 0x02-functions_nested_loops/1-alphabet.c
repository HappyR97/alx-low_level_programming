#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - Prints all letters from a to z
 * Return: Always void
*/

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
