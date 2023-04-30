#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer to the first node of the list.
 *
 * Return: the head node's data (n), or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	/* if the list is empty */
	if (*head == NULL)
		return (0);
	temp = *head; /* save the address of the head node */
	data = temp->n; /* save the data of the head node */
	*head = temp->next; /* update the head pointer to the next node */
	free(temp); /* free the head node */
	return (data);
}
