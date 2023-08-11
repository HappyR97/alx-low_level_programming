#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
*/

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	printf("Last digit of %i is %d ", n, l);

	if (l > 5)
	{
		puts("and is greater than 5");
	}
	else if (l == 0)
	{
		puts("and is 0");
	}
	else
	{
		puts("and is less than 6 and not 0");
	}
	return (0);
}
