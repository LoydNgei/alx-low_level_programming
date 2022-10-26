#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds node at the beginning of a listint_t list
 * @head: pointer to the first node in the list
 * @n: Data to insert in that new code
 * Return: the adress of the new element, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
