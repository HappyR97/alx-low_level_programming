#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the note at specific index from a list
 * @head: pointer to head pointer of the list
 * @index: index to delete at
 *
 * Return: 1 if succeeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr1;
	dlistint_t *ptr2;
	unsigned int i;

	if (!*head)
		return (-1);
	ptr2 = *head;
	if (index == 0)
	{
		*head = ptr2->next;
		if (*head)
			(*head)->prev = NULL;
		free(ptr2);
		return (1);
	}
	for (i = 0; i < index && ptr2 != NULL; i++)
		ptr2 = ptr2->next;
	if (!ptr2)
		return (-1);

	ptr1 = ptr2->prev;
	if (ptr1)
		ptr1->next = ptr2->next;
	if (ptr2->next)
		ptr2->next->prev = ptr1;

	free(ptr2);
	return (1);
}
