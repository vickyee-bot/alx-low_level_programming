#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to a pointer to the first node of the list.
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (count);

	while (*h != NULL)
	{
		if (*h <= (*h)->next)
		{
			temp = *h;
			*h = NULL;
		}
		else
		{
			temp = (*h)->next;
			(*h)->next = NULL;
		}
		free(temp);
		count++;
	}
	return (count);
}
