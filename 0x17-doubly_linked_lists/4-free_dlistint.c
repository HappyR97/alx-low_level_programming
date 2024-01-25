#include "lists.h"

/**
 * free_dlistint - Frees a list
 * @head: head pointer
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
