#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
*/

int main(void)
{
	int i = 0;
	int t = 0;

	while (i < 1024)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			t = t + i;
		}
		i++;
	}
	printf("%d\n", t);
	return (0);
}
