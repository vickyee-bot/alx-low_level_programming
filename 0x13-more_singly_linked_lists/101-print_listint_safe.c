#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current, *temp;

	current = head;
	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		temp = current->next;

		/* check if next node has been printed before */
		while (temp != NULL && temp < current)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			temp = temp->next;
		}
		current = temp;
	}
	return (count);
}
