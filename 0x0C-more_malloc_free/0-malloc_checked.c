#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - Allocates memory using malloc
 * @b: amount of memory to allocate
 *
 * Return: Pointer to allocated memory or exit(98) if failed
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
