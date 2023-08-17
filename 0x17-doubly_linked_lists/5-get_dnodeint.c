#include "lists.h"

/**
 * get_dnodeint_at_index - get node value at @index
 * @head: head of the dlist
 * @index: index of wanted node
 * Return: the node or NULL if the index does'nt exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr;

	curr = head;

	for (i = 0; curr != NULL; i++)
	{
		if (i == index)
			return (curr);

		curr = curr->next;
	}

	return (NULL);
}
