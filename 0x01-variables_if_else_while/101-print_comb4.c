#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0
*/

int main(void)
{
	int i;
	int j;
	int h;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			for (h = 50; h < 58; h++)
			{
				if (h > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(h);
					if (i != 55 || j != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
