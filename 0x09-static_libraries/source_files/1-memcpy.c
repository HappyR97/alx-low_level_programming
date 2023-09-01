#include "main.h"

/**
 * *_memcpy - Copies memory area
 * @dest: destination string
 * @src: Source string
 * @n: Number of bytes
 * Return: dest (char)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
