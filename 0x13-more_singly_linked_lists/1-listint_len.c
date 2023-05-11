#include "lists.h"

/**
 * listint_len - function to get number of linked list elements
 * @h: head of the linked list
 * Return: number of nodes in linked list
 */
size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h)
	{
		h = h->next;
		++n;
	}

	return (n);
}
