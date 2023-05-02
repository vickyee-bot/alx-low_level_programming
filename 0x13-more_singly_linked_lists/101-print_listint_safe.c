#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: Pointer to the beginning of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;

		current = head;
		head = head->next;

		if (current <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
	}
	return (count);
}
