#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (j <= i / 2)
	{
		tmp = s[j];
		s[j] = s[i - j];
		s[i - j] = tmp;
		j++;
	}
}
