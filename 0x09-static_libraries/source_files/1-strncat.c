#include "main.h"

/**
 * *_strncat - Concatenates 2 strings, but uses at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes to use
 * Return: dest;
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int k;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (k = 0; k < n && src[k] != '\0'; k++)
	{
		dest[i + k] = src[k];
	}

	dest[i + k] = '\0';

	return (dest);
}
