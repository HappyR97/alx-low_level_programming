#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees list, sets head to NULL
 * @head: Head pointer
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;

	ptr = *head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}

	*head = NULL;
}
