#include "main.h"

/**
 * char *_strcpy - Copies string to new str dest
 * @dest: destination str
 * @src: source str
 *
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	i++;
	dest[i] = '\0';

	return (dest);
}
