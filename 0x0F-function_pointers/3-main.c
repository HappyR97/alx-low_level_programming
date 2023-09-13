#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, performs calculation on command line args
 * @argc: Number of arguments passed
 * @argv: Array of arguments passed
 * Return: 0 on success, 98 or 99 or 100 on failure.
 */

int main(int argc, char *argv[])
{
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[0] == 0)
	{
		printf("Error\n");
		exit(100);
	}

	operation = get_op_func(argv[2]);

	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operation(atoi(argv[1]), atoi(argv[3])));


	return (0);
}
