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
	unsigned int i = 0;

	new_ptr = create_node(n);
	if (idx == 0)
	{
		new_ptr->next = *head;
		*head = new_ptr;
		return (new_ptr);
	}
	ptr = *head;
	while (i < idx - 1)
	{
		if (!ptr)
		{
			free(new_ptr);
			return (NULL);
		}
		ptr = ptr->next;
		i++;
	}
	new_ptr->next = ptr->next;
	ptr->next = new_ptr;
	return (new_ptr);
}

/**
 * *create_node - Creates a new listint_t node
 * @n: New node's date
 *
 * Return: pointer to new node
 */

listint_t *create_node(int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	ptr->n = n;
	ptr->next = NULL;

	return (ptr);
}
