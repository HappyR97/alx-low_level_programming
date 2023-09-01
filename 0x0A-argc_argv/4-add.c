#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, adds positive numbers
 * @argc: Number of arguments passed
 * @argv: Array of arguments passed
 *
 * Return: 0 if success, 1 if not
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int total = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[i]);

	}
	printf("%d\n", total);
	return (0);
}
