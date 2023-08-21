#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: String to be converted
 *
 * Return: The integer converted from the string
 */
int _atoi(char *s)
{
	 int i = 0;
	 int num = 0;
	 int str_length = 0;
	 int negative = 0;
	 int found_digit = 0;
	 int digit = 0;

	while (s[str_length] != '\0')
		str_length++;

	while (i < str_length && found_digit == 0)
	{
		if (s[i] == '-')
		{
			++negative;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';

			if (negative % 2)
			{
				digit = -digit;
			}
			num = num * 10 + digit;
			found_digit = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			found_digit = 0;
		}
		i++;
	}

	if (found_digit == 0)
		return (0);

	return (num);
}

