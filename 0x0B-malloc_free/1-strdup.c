#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_strdup - Returns pointer to a copy of another string
 * @str: string to contain copy
 *
 * Return: Pointer to newly created string if success, 0 if not
 */

char *_strdup(char *str)
{
	int i;
	int length;
	char *p;

	if (str == NULL)
		return (0);

	length = strlen(str);

	p = malloc(length * sizeof(char));

	if (!p)
		return (0);

	for (i = 0; i < length; i++)
	{
		*(p + i) = *(str + i);
	}

	return (p);
}
