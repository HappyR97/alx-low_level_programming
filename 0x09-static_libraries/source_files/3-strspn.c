#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to search
 * @accept: String to find in s
 *
 * Return: Number of bytes in the initial segment of S
 * which consists only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (n);
}
