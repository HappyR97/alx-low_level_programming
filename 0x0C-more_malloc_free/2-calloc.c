#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - Allocates memor for an array using malloc
 * @nmemb: Number of elements
 * @size: size of each element
 *
 * Return: Pointer to array, NULL if failed
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	
	if (!arr)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		*(arr + i) = 0;
	return (arr);
}
