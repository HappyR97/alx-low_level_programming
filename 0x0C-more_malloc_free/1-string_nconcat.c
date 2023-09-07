#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - Concatenates n bytes from second str to first str
 * @s1: first str
 * @s2: second str
 * @n: number of bytes to concat from second str
 *
 * Return: Pointer to concatenated string, NULL if failed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int length_s1 = 0;
	unsigned int length_s2 = 0;
	char *concat;

	if (!s1)
		*s1 = '\0';
	if (!s2)
	{
		*s2 = '\0';
		n = 0;
	}
	while (s1[i] != '\0')
	{
		length_s1++;
		i++;
	}
	while (s2[j] != '\0')
	{
		length_s2++;
		j++;
	}
	if (n >= length_s2)
		n = length_s2;
	concat = malloc(length_s1 + n + 1);
	if (!concat)
		return (NULL);
	for (i = 0; i < length_s1; i++)
		*(concat + i) = *(s1 + i);
	for (i = 0; i < n; i++)
		*(concat + length_s1 + i) = *(s2 + i);
	*(concat + length_s1 + i) = '\0';
	return (concat);
}
