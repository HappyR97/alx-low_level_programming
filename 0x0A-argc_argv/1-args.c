#include <stdio.h>

/**
 * main - Entry point, prints the number of arguments passed into it.
 * @argc: Number of arguments passed to function
 * @argv: Array of arguments passed to function
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
