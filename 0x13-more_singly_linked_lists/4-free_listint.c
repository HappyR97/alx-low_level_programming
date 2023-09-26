#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees list
 * @head: head pointer
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
