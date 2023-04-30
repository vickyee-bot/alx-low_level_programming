#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL
 * @head: A pointer to a pointer to the first node of the list
 *
 * Return: always nothing
 */
void free_listint2(listint_t **head)
{
	/*create two listint_t pointers, current and next*/
	listint_t *current, *next;

	/*check if head is NULL*/
	if (head == NULL)
		return;
	/*initialize current to the value of the head pointer*/
	current = *head;
	/*loop through the list using a while loop*/
	while (current != NULL)
	{
		/*set next to the value of current->next*/
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
