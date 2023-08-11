#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
*/

int main(void)
{
	int n = 48;
	int l = 97;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	while (l < 103)
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
