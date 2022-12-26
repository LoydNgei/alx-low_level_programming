#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: beginning of the list
 * @index: The index of the node, starting from 0
 * Return: Always 0 on Success, NULL if it fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int count = 0;

	if (node == NULL)
	{
		return (NULL);
	}
	while (node != NULL)
	{
		if (count == index)
			return (node);
		count++;
		node = node->next;
	}
	return (NULL);
}
