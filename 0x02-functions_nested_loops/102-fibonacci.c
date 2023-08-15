#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/

int main(void)
{
	int i = 0;
	unsigned long int f = 0;
	unsigned long int s = 1;
	unsigned long int t;

	while (i < 50)
	{
		t = f + s;
		printf("%lu", t);

		f = s;
		s = t;

		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
		i++;
	}
	return (0);
}
