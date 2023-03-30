#include <stdio.h>
#include "lists.h"


/**
 * list_len - prints number of elements in liked list
 * @h: head of the linked lists
 *
 * Return: number of nodes in linked list
 */
size_t list_len(const list_t *h)
{
	int n;

	n = 0;
	while (h != NULL)
	{
		if (h->str)
		{
			h = h->next;
			n++;
		}
		else
		{
			h = h->next;
		}
	}
	return (n);
}
