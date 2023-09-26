#include "lists.h"

/**
 * *get_nodeint_at_index - Returns the nth node of a list
 * @head: Head pointer
 * @index: Index to get
 *
 * Return: pointer at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	ptr = head;
	i = 0;

	while (ptr != NULL)
	{
		if (i == index)
			return (ptr);
		ptr = ptr->next;
		i++;
	}

	return (NULL);
}
