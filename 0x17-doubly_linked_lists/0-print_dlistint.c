#include "lists.h"

/**
 * print_dlistint - print doubly linked list elements data
 * @h: head of dlist
 * Return: number of elements in dlist
 */
size_t print_dlistint(const dlistint_t *h)
{
	int len;
	const dlistint_t *curr = h;

	for (len = 0; curr; len++)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}

	return (len);
}
