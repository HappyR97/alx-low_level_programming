#include <unistd.h>
#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 * Return - void
*/

void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while (h < 24)
	{
		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		m = 0;
		h++
	}
}
