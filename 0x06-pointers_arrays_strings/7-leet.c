#include "main.h"

/**
 * *leet - Encodes a string to 1337
 * @str: String to encode
 * Return: New string (char)
 */

char *leet(char *str)
{
	int i;
	int j;
	char *letter = "aAeEoOtTlL";
	char *leet = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		for (; letter[j] != '\0'; j++)
		{
			if (str[i] == letter[j])
			{
				str[i] = leet[j];
			}
		}
	}
	return (str);
}
