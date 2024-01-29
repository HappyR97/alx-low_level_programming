#include "main.h"

/**
 * *_strstr - Locates a substring
 * @haystack: String to search
 * @needle: Substring to search for
 * Return: Pointer to the begigging of the located substring
 * or 0 if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (0);
}
