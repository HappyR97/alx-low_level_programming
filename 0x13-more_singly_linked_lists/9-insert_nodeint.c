#include "lists.h"
#include <stdlib.h>

/**
 * *insert_nodeint_at_index - Insets a new node at a given position
 * @head: Head pointer
 * @idx: Index to insert new node
 * @n: Data of new node
 *
 * Return: address or new node on success, NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *new_ptr;
	unsigned int i;

	new_ptr = malloc(sizeof(listint_t));
	if (!new_ptr)
		return (NULL);
	new_ptr->n = n;
	new_ptr->next = NULL;

	ptr = *head;
	i = 0;
	while (i != idx - 1)
	{
		ptr = ptr->next;
		i++;
	}
	new_ptr->next = ptr->next;
	ptr->next = new_ptr;

	return (new_ptr);
}
