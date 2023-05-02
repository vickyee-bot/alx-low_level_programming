#include "lists.h"
#include <stdlib.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the header of linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	
	while (h != NULL)
	{
		char c = h->n + '0';
		_putchar(c);
		_putchar('\n');
		h = h->next;
		count++;
	}
	return (count);
}
