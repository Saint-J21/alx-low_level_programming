#include "lists.h"

/**
 * sum_listint - returns the sum of all data in list.
 * @head: pointer to the head.
 *
 * Description: This function calculates and returns the sum of all the integer
 * values stored in the list.
 *
 * Returns: the sum of all data, or 0 if the list is empty.
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
