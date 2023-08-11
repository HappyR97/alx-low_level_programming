#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
*/

int main(void)
{
	int l = 97;
	int u = 65;
	int myLower;
	int myUpper;

	while (l < 123)
	{
		myLower = l;
		putchar(myLower);
		l++;
	}
	while (u < 91)
	{
		myUpper = u;
		putchar(myUpper);
		u++;
	}
	putchar('\n');
	return (0);
}
