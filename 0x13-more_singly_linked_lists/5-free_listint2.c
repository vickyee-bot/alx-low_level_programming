#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
