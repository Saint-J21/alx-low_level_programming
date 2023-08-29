#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node.
 * @head: pointer to the head.
 * @index: index of the node.
 *
 * Return: pointer to the nth node, or NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}
