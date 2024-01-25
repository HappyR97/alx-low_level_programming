#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a list
 * @head: head pointer
 * @index: the index of the node to return
 *
 * Return: nth element (int)
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i;

	ptr = head;
	for (i = 0; i != index; i++)
	{
		if (ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
	}

	return (ptr);
}
