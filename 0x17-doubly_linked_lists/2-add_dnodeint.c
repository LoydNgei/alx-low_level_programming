#include "lists.h"

/**
 * *add_dnodeint - adds a new node at the beginning of a list
 * @head: The first node in the list
 * @n: integer to insert
 * Return: address of the new element, NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == 0)
		return NULL;

	new->n = n;
	new->next = *head;
	*head = new;

	return new;
}
