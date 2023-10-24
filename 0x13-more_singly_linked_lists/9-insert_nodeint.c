#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index at which the new node should be added (starting at 0).
 * @n: The data to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		return (add_nodeint(head, n));
	}
	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}
	if (current == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
