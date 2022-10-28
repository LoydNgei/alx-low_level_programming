#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_loop - finds the loop in  linked list
 * @head: the pointer to the linked list
 * Return: the address of the node where the loop starts
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *x, *y;

	if (head == NULL || head->next == NULL)
		return (NULL);

	x = head->next;
	y = (head->next)->next;

	while (y)
	{
		if (x == y)
		{
			x = y;

			while (x != y)
			{
				x = x->next;
				y = y->next;
			}

			return (x);
		}

		x = x->next;
		y = (y->next)->next;
	}

	return (NULL);
}
