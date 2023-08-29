#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees the list
 * @head: pointer to the head.
 *
 * Description: this function frees a listint_t list and
 * sets the head pointer to NULL.
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
