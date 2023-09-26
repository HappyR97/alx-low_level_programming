#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds node at the beginning of list
 * @head: head pointer
 * @n: number member of list
 *
 * Return: new pointer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
