#include <stdio.h>
#include "lists.h"


/**
 * print_list - prints elements in each node in liked list
 * @h: head of the linked lists
 *
 * Return: number of nodes in linked list
 */
size_t print_list(const list_t *h)
{
	int n;

	n = 0;
	while (h != NULL && n++)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		else
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
	}
	return (n);
}
