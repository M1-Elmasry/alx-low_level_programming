#include "lists.h"

/**
 * print_listint - function to print linked list elements
 * @h: head of the linked list
 * Return: number of nodes in linked list
 */
size_t print_listint(const listint_t *h)
{
	int n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		++n;
	}

	return (n);
}
