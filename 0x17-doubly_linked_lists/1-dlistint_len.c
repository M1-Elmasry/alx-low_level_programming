#include "lists.h"

/**
 * dlistint_len - return number of elements in dlist
 * @h: head of dlist
 * Return: len of dlist
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len;
	const dlistint_t *curr = h;

	for (len = 0; curr; len++)
	{
		curr = curr->next;
	}

	return (len);

}
