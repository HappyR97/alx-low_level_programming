#include "lists.h"

/**
 * *reverse_listint - Reverses linked list
 * @head: head pointer
 *
 * Return: new head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL;
	listint_t *ptr2 = NULL;

	while (*head != NULL)
	{
		ptr2 = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = ptr2;
	}

	*head = ptr;

	return (*head);
}
