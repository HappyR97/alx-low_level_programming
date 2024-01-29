#include "main.h"

/**
 * *_strpbrk - Searches a string for any of a set of bytes
 * @s: string to search
 * @accept: string to search for
 *
 * Return: Pointer to the byte in s that matches one of the
 * bytes in accept. or 0 if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
