#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_note - adds a new node at the beginningof list
 * @**head - double pointer to the list_t list
 * @*str - new string to add in the node
 * Return: The address of the new element
 */
list_t *add_note(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
