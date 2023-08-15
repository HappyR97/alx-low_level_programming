#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
*/

int main(void)
{
	unsigned long int f = 0;
	unsigned long int s = 1;
	unsigned long int t = 0;
	unsigned long int sum = 0;

	while (t < 4000000)
	{
		t = f + s;
		f = s;
		s = t;

		if ((t % 2) == 0)
		{
			sum += t;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
