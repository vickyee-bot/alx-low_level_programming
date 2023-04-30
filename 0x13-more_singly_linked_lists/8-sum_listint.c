#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - Returns sum of all data (n) of listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: The sum of all the data (n) of the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
