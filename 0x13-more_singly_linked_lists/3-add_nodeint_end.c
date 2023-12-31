#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end.
 * @head: pointer to the pointer.
 * @n: value to be stored in the new node.
 *
 * Return: address of teh new element or NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new_node;
	return (new_node);
}
