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
	listint_t *next_ptr;
	unsigned int i;

	new_ptr = create_node(n);
	next_ptr = find_next_ptr(&(*head), idx);
	ptr = *head;
	i = 0;
	while (ptr != NULL)
	{
		if (i == idx - 1)
		{
			ptr->next = new_ptr;
			ptr = ptr->next;
			ptr->next = next_ptr;
			break;
		}
		ptr = ptr->next;
		i++;
	}
	return (new_ptr);
}

/**
 * *create_node - Create a new listint_t node
 * @n: Data of new node
 *
 * Return: pointer to created node
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
 * *find_next_ptr - Finds the pointer to the next node
 * @head: head pointer
 * @idx: index of our node
 *
 * Return: pointer to next node in list
 */

listint_t *find_next_ptr(listint_t **head, unsigned int idx)
{
	listint_t *ptr;
	listint_t *next_ptr;
	unsigned int i;

	ptr = *head;
	i = 0;

	while (ptr != NULL)
	{
		if (i == idx)
		{
			next_ptr = ptr;
			break;
		}
		ptr = ptr->next;
		next_ptr = NULL;
		i++;
	}

	return (next_ptr);
}
