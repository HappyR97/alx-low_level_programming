#include <stdio.h>

/**
 * main - Entry point, prints all arguments received
 * @argc: Number of arguments received
 * @argv: Array of arguments received
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
