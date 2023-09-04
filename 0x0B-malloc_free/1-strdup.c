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

	if (!str)
		return (NULL);

	length = strlen(str);

	p = malloc(length * sizeof(char));

	if (!p)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		*(p + i) = *(str + i);
	}

	*(p + i) = '\0';

	return (p);
}
