#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all members of list
 * @h: Head pointer
 *
 * Return: count
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count;
	const listint_t *ptr;

	ptr = h;
	count = 0;

	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}

	return (count);
}
