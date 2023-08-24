#include "main.h"

/**
 * *cap_string - Capitalizes All Words Of A String
 * @str: String To Capitalize
 *
 * Return: New Str
 */

char *cap_string(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}

	if(str[0] > 96 && str[0] < 123)
	{
		str[0] = str[0] - 32;
	}

	for (j = 0; j < i; j++)
	{
		if (str[j] == ' ' || str[j] == '\t' || str[j] == '\n'
			|| str[j] == ',' || str[j] == ';' || str[j] == '.'
			|| str[j] == '!' || str[j] == '?' || str[j] == '"'
			|| str[j] == ')' || str[j] == '(' || str[j] == '{'
			|| str[j] == '}')
		{
			if (str[j + 1] > 96 && str[j + 1] < 123)
			{
				str[j + 1] = str[j + 1] - 32;
			}
		}
	}
	return (str);
}
