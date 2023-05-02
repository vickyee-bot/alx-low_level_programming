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
	const listint_t *current;

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
