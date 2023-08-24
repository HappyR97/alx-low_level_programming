#include "main.h"

/**
 * *string_toupper - Changes all lowercase letters to uppercase
 * @: string to change
 * 
 * Return: new string
 */

char *string_toupper(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		if (str[j] < 123 && str[j] > 96)
		{
			str[j] = str[j] - 32;
		}
       	}

	return (str);
}
