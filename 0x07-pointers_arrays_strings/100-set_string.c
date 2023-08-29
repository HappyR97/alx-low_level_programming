#include "main.h"

/**
 * set_string - Sets value of a pointer to a char
 * @s: Pointer to change
 * @to: Char to change pointer to
 *
 * Return: Void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
