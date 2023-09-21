#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a new node at the end of list_t list
 * @head: Head pointer
 * @str: str element
 *
 * Return: address of new element on success, NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_ptr;
	list_t *ptr;

	new_ptr = malloc(sizeof(list_t));
	if (!new_ptr)
		return (NULL);
	new_ptr->str = strdup(str);
	new_ptr->len = strlen(str);
	new_ptr->next = NULL;

	if (*head == NULL)
	{
		*head = new_ptr;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_ptr;
	}
	return (new_ptr);
}
