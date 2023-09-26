#include "lists.h"

/**
 * sum_listint - sums all data (n) of a linked list
 * @head: Head pointer
 *
 * Return: sum (int)
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum;

	if (head == NULL)
		return (0);

	ptr = head;
	sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
