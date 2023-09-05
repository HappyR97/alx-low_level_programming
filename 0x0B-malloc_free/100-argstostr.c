#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - Concatenantes all the arguments passed
 * @ac: Number of arguments passed
 * @av: Pointer to array of arguments
 *
 * Return: concatenated string (char)
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int k = 0;
	char *concatstr;
	int length = 0;

	if (av == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}
	concatstr = malloc((length + 1) * sizeof(char));
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatstr[k] = av[i][j];
			k++;
		}
		concatstr[k] = '\n';
		k++;
	}
	concatstr[k] = '\0';
	return (concatstr);
}
