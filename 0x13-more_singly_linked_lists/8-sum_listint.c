#include "lists.h"

/**
 * sum_listint - returns the sum of all data in list.
 * @head: pointer to the head.
 *
 * Returns: the sum of all data, or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
