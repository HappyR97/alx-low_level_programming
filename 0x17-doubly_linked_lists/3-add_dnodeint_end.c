#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a list
 * @head: pointer to head pointer of list
 * @n: n member of new list
 *
 * Return: the address of the new element, or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *new_ptr;

	new_ptr = malloc(sizeof(dlistint_t));
	if (!new_ptr)
		return (NULL);
	new_ptr->n = n;
	new_ptr->next = NULL;
	new_ptr->prev = NULL;
	if (*head == NULL)
		*head = new_ptr;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_ptr;
		new_ptr->prev = ptr;
	}

	return (new_ptr);
}
