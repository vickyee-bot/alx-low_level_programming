#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to a pointer to the first node in the list
 * @idx: index where new node should be added (starting at 0)
 * @n: data to be stored in the new node
 *
 * Return: pointer to the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp_node;
	unsigned int i;

	/* create new node with data n */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* if inserting at beginning of list */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	/* find node before index */
	temp_node = *head;
	for (i = 0; i < idx - 1 && temp_node != NULL; i++)
		temp_node = temp_node->next;
	/* if node before index not found, return NULL */
	if (temp_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* insert new node */
	new_node->next = temp_node->next;
	temp_node->next = new_node;
	return (new_node);
}
