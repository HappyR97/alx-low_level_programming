#include <unistd.h>
#include "main.h"

/**
 * times_table - prints time table from 0 to 9
 *
 * Return: always void
*/

void times_table(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (j !=0)
			{
				_putchar(',');
				_putchar(' ');
				if ((i * j) < 10)
				{
					_putchar(' ');
				}
			}
			if ((i * j) < 10)
			{
				_putchar((i * j) + '0');
			}
			else
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
