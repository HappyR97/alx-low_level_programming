#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
*/

int main(void)
{
	int i = 97;
	int myChar;

	while (i < 123)
	{
		myChar = i;
		putchar(myChar);
		i++;
	}
	putchar('\n');
	return (0);
}
