#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - Create an array of chars, initialized with a char
 * @size: Size of the array
 * @c: The char to use in the array
 *
 * Return: Pointer to the array if success, otherwise 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(size * sizeof(char));

	if (!p || size == 0)
		return (0);
	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}

	return (p);
}
