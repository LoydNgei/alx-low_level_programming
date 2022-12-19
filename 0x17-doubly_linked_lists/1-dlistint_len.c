#include "lists.h"

/**
 * dlistint_len - Number of elements in a linked dlistint_t list
 * @h: the node to the dlistint_t list
 * Return: 0 Always on Success
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return count;
}
