#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a list
 * @head: pointer to head pointer of list
 * @n: n member of created node
 *
 * Return: pointer to new node, NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = *head;
	(*head)->prev = ptr;

	*head = ptr;

	return (*head);
}
