#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes a node at index of a list
 * @head: Head pointer
 * @index: Index of node to delete
 *
 * Return: 1 on success, 0 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	listint_t *ptr2;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	ptr = *head;
	ptr2 = *head;
	i = 0;

	if (index == 0)
	{
		*head = ptr2->next;
		free(ptr2);
		return (1);
	}

	while (i < index)
	{
		if (ptr2 == NULL)
			return (-1);
		ptr = ptr2;
		ptr2 = ptr2->next;
		i++;
	}
	ptr->next = ptr2->next;
	free(ptr2);
	return (1);
}
