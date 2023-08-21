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
	int i = 0;
	int j;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (j = 0 ; j < i ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
