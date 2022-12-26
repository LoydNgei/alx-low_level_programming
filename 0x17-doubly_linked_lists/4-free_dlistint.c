#include "lists.h"

/**
 * free_dlistint - A function that frees a dlistint_t list
 * @head: the head of the list
 * Return: Always 0 on success, 1 if it fails
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head == 0)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
