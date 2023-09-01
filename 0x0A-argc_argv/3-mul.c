#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, multiplies two numbers and prints result
 * @argc: Number of arguments passed
 * @argv: Array of arguments passed
 *
 * Return: 0 if successful, 1 if more program did not receive 2 arguments.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
