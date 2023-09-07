#include "main.h"
#include <stdlib.h>

/**
 * *array_range - Creates an array of integers
 * @min: First number to print
 * @max: last number to print
 *
 * Return: Pointer to created array, NULL if failed
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (!arr)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		*(arr + i) = min + i;
	return (arr);
}
