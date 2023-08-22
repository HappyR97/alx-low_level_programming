#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int total;
	char l;

	strand(time(NULL));
	while (total <= 2645)
	{
		l = rand() % 128;
		total += l;
		putchar(l);
	}
	putchar(2772 - total);
	return (0);
}
