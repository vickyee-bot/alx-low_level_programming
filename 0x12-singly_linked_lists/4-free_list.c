#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 *
 * Return: always 0
 */
void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *next = current->next;
		
		free(current->str);
		free(current);
		
		current = next;
	}
}
