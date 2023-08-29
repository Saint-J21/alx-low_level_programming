#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of list.
 *
 * @head: a pointer to a pointer.
 * @n: the value to be added
 *
 * Return: address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
