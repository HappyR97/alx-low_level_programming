#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, prints minimum number of coins
 * to make change for an amount of money
 * @argc: Number of arguments passed to program
 * @argv: Array of arguments passed to program
 * Return: 0 if success, otherwise 1
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int num = 0;
	int i;
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);

	if (change < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (change >= coins[i])
		{
			change -= coins[i];
			num++;
		}
	}
	printf("%d\n", num);
	return (0);

}
