#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds node at the ned of the list
 * @head: Head pointer
 * @n: Number member of node
 *
 * Return: new pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_ptr;
	listint_t *ptr;

	new_ptr = malloc(sizeof(listint_t));
	if (!new_ptr)
		return (NULL);
	new_ptr->n = n;
	new_ptr->next = NULL;

	if (*head == NULL)
	{
		*head = new_ptr;
		return (new_ptr);
	}

	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new_ptr;

	return (new_ptr);
}
