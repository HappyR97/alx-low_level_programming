#include "main.h"

/**
 * *_memset - Fills memory with a constant byte
 * @s: string to fill
 * @b: constant byte
 * @n: bytes to fill
 * Return: s (char)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
