#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes head node.
 * @head: Head pointer
 *
 * Return: head node's date (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (n);
}
