#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer to the head node of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	*h = NULL;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		count++;
		if (next >= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
		current = next;
	}
	return (count);
}
