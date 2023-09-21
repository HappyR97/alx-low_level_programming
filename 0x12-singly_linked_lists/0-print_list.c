#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list
 * @h: pointer
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = NULL;
	size_t count;

	if (h == NULL)
		return (0);
	count = 0;
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
		{
			printf("[0] %s\n", "(nil)");
		}
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
	       ptr = ptr->next;
	}

	return (count);
}
