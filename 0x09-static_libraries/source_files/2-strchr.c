#include "main.h"

/**
 * *_strchr - Locates a character in a string
 * @s: String to search in
 * @c: Character to search for
 * Return: Address of first occurence of c or 0 if no occurence
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
