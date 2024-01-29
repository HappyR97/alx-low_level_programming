#include "main.h"

/**
 * _strcmp - Compares 2 strings
 * @s1: Fisrt string
 * @s2: Second string
 * Return: Difference between s1 and s2 (int)
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (s1[i] - s2[i]);
}
