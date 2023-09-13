#include "function_pointers.h"

/**
 * array_iterator - Executes function given a parameter on each element of arr
 * @array: Array to use
 * @size: Size of array
 * @action: Function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
