#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list
 * @head: head pointer
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
