#include "lists.h"


/**
 * insert_dnodeint_at_index - insert new node at specific index
 * @h: head of the dlist
 * @idx: index of new node
 * @n: data of the new node
 * Return: address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *curr, *new_node;

	if (!h)
		return (NULL);

	curr = *h;

	for (i = 0; curr != NULL; i++)
	{
		if (i == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (!new_node)
				return (NULL);

			new_node->n = n;
			new_node->next = curr;
			new_node->prev = curr->prev;
			if (curr->prev)
				curr->prev->next = new_node;
			curr->prev = new_node;

			return (new_node);
		}

		curr = curr->next;
	}

	return (NULL);

}
