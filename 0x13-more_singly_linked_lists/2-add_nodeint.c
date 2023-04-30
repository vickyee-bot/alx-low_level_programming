#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: double pointer to the head of the list
 * @n: value to store in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/*declare a pointer to the new node*/
	listint_t *new_node;

	/*allocate memory for the new node*/
	new_node = malloc(sizeof(listint_t));
	/*check if allocation was successful*/
	if (new_node == NULL)
		return (NULL);
	/*set the value of the new node*/
	new_node->n = n;
	/*make the new node point to the current head*/
	new_node->next = *head;
	/*update the head to point to the new node*/
	*head = new_node;
	/*return the address of the new node*/
	return (new_node);
}
