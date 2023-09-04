#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - Concatenates two strings
 * @s1: First string to concatenate
 * @s2: Second string to concatenate
 *
 * Return: Pointer to concatenated string if success, NULL if failure.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, length1, length2;
	char *p;

	if (s1 == NULL)
	{
		length1 = 0;
	}
	else
	{
		length1 = strlen(s1);
	}

	if (s2 == NULL)
	{
		length2 = 0;
	}
	else
	{
		length2 = strlen(s2);
	}

	p = malloc((length1 + length2) * sizeof(char) + 1);

	if (!p)
		return (NULL);
	for (i = 0; i < length1; i++)
		*(p + i) = *(s1 + i);
	for (j = 0; j < length2; j++)
		*(p + i + j) = *(s2 + j);
	*(p + i + j) = '\0';
	return (p);
}
