#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: pointer to head pointer of list
 * @idx: index to insert node
 * @n: n member of new node
 *
 * Return: pointer to new node, or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr1;
	dlistint_t *ptr2;
	dlistint_t *new_ptr;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	ptr1 = *h;
	for (i = 0; i != idx - 1; i++)
	{
		if (!ptr1)
			return (NULL);
		ptr1 = ptr1->next;
	}
	if (ptr1->next == NULL)
		return (add_dnodeint_end(h, n));
	ptr2 = ptr1->next;
	new_ptr = malloc(sizeof(dlistint_t));
	new_ptr->n = n;
	new_ptr->next = ptr2;
	new_ptr->prev = ptr1;

	ptr1->next = new_ptr;
	ptr2->prev = new_ptr;

	return (new_ptr);
}
