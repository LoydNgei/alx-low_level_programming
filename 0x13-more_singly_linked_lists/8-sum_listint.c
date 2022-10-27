#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - sum of all the data (n) of a linked list
 * @head: the pointer to the beginning of the linked list
 * Return: sum of all data (Success),0 (fails)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum  = sum + head->n;
		head = head->next;
	}

	return (sum);

}
