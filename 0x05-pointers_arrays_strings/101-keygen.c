#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int total;
	char l;

	srand(time(NULL));
	while (total <= 2645)
	{
		l = rand() % 128;
		total += l;
		putchar(l);
	}
	putchar(2772 - total);
	return (0);
}
