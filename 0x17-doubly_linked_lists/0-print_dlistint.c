#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: node of the dlistint_t list
 * Return: the number of nodes on success, NULL if it fails
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != 0)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return num;
}
