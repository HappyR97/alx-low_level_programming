#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: old memory to reallocate
 * @old_size: size of old memory
 * @new_size: size of new memory
 *
 * Return: Pointer to new memory, NULL if failed
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;

	if (!ptr)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		for (i = 0; i < old_size; i++)
			((char *)new_ptr)[i] = ((char *)ptr)[i];
		free(ptr);
		return (new_ptr);
	}
	/* If none of conditions above, then this is for new_size < old_size */
	new_ptr = malloc(new_size);
	for (i = 0; i < new_size; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	free(ptr);
	return (new_ptr);
}
