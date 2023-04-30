#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to a pointer to the first node of the list
 * @index: index of the node to delete (starting from 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	previous = NULL;

	for (i = 0; i <= index && current != NULL; i++)
	{
		if (i == index)
		{
			if (previous == NULL)
				*head = current->next;
			else
				previous->next = current->next;

			free(current);
			return (1);
		}
		previous = current;
		current = current->next;
	}
	return (-1);
}
