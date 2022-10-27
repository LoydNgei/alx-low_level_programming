#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * and returns the head node's data (n)
 * @head: The function to delete from
 * Return: 0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
		return 0;

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);

}
