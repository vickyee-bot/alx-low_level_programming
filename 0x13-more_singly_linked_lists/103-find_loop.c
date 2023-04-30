#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * find_listint_loop - Find the loop in a linked list
 * @head: Pointer to the head of the list
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	while (fast && fast->next)
	{
		slow = slow->next;/* move slow pointer one step */
		fast = fast->next->next; /* move fast pointer two steps */

		if (slow == fast)/* if the pointers meet, there is a loop */
		{
			slow = head;/* reset slow pointer to head */

			while (slow != fast) /* move slow and fast pointers one step at a time */
			{
				slow = slow->next;
				fast = fast->next;
			}
			return slow;/* return the address of the node where the loop starts */
		}
	}
	return (NULL);/* no loop found */
}
