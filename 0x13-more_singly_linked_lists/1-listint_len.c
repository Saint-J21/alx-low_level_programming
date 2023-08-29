#include "lists.h"
#include <stddef.h>

/**
 * listint_len - Counts the number of elements.
 *
 * @h: a pointer.
 *
 * Return: The number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
