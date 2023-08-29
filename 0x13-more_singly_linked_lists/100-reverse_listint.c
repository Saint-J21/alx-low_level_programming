#include "lists.h"

/**
 * reverse_listint - reverses a list.
 * @head: pointer to a pointer.
 *
 * Return: pointer to the first node of reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		current->next = prev;
		prev = current;
		current = next_node;
	}

	*head = prev;

	return (*head);
}
