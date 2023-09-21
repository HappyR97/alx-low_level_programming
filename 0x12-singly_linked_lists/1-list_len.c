#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list
 * @h: Pointer
 *
 * Return: Number of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *ptr = NULL;
	size_t count = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
