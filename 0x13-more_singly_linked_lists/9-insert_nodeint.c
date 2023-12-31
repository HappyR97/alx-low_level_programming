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
	unsigned int i, count;

	new_ptr = create_node(n);
	if (new_ptr == NULL || head == NULL)
		return (NULL);

	count = listint_len(*head);
	if (idx > count)
		return (NULL);
	if (idx == 0)
	{
		new_ptr->next = *head;
		*head = new_ptr;
		return (new_ptr);
	}
	ptr = *head;
	i = 0;
	while (i < idx - 1)
	{
		if (ptr == NULL)
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
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	return (ptr);
}

/**
 * listint_len - Returns number of elemens in list
 * @h: Head pointer
 *
 * Return: count
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	unsigned int count;

	count = 0;
	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
