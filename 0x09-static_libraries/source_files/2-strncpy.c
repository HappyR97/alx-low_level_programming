#include "main.h"

/**
 * *_strncpy - Copies a string
 * @dest: Destination string
 * @src: Source string
 * @n: number of bytes
 * Return: dest (char)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	for (; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
