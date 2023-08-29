#include <stdlib.h>
#include "lists.h"

/**
 * fre_listint_safe - frees a list.
 * @h: pointer to the head.
 *
 * Description: frees a list int_t list and sets head to NULL.
 *
 * Returns: the size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		if (current >= next)
	{
		*h = NULL;
		return (count);
	}
	current = next;
}

	*h = NULL;
	return (count);
}
