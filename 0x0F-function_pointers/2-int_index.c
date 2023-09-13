#include "function_pointers.h"

/**
 * int_index - Searches for an integer inside an array
 * @array: Array to search in
 * @size: Size of the array
 * @cmp: Function pointer
 *
 * Return: index of matching integer (int) or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
