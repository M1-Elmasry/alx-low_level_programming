#include "lists.h"

/**
 * free_dlistint - free dlist
 * @head: head of the dlist
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
