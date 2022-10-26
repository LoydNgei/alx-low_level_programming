#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - number of elements in a linked listint_t list
 * @h: linked list of type listint to print
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
