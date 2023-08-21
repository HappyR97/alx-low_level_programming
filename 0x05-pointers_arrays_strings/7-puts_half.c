#include "main.h"

/**
 * puts_half - prints half of string
 * @str: string to use
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i / 2)
	{
		if (i % 2 == 0)
		{
			_putchar(str[(i / 2) + j]);
		}
		else
		{
			_putchar(str[(i / 2) + j + 1]);
		}
		j++;
	}
	_putchar('\n');
}
