#include "lists.h"

/**
 * sum_dlistint - sum of all data (n)s in the dlist
 * @head: head of the dlist
 * Return: sum of the dlist
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int i, sum = 0;
	dlistint_t *curr;

	curr = head;

	for (i = 0; curr != NULL; i++)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);

}
