#include <stdio.h>

/**
 * main - Prints the largest prime factor of 612852475143
 * Return: Always 0
 */

int main(void)
{
	long int n = 612852475143;
	long int i = 2;

	while (n != 1)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
		else
		{
			i++;
		}
	}

	printf("%lu\n", i);
	return (0);
}
