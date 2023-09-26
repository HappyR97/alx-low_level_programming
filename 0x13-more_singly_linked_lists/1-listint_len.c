#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns number of elemens in list
 * @h: Head pointer
 *
 * Return: count
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	unsigned int count;

	count = 0;
	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
