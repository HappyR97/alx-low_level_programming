#include "lists.h"

/**
 * sum_dlistint - Returns the sm of all the data (n) of a list
 * @head: head pointer
 *
 * Return: sum of all data (int)
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	ptr = head;
	if (ptr)
	{
		while (ptr != NULL)
		{
			sum += ptr->n;
			ptr = ptr->next;
		}
	}

	return (sum);
}
