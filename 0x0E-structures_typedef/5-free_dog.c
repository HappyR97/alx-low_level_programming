#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory of struct and its members
 * @d: struct to free
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
