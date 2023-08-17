#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at specific index in dlist
 * @head: of the dlist
 * @index: index of the node that we want to delete
 * Return: 1 if success else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr;

	if (!head)
		return (-1);

	curr = *head;

	for (i = 0; curr != NULL; i++)
	{
		if (i == index)
		{
			if (curr->prev)
				curr->prev->next = curr->next;
			else
				*head = curr->next;

			if (curr->next)
				curr->next->prev = curr->prev;

			free(curr);
			return (1);
		}
		curr = curr->next;
	}
	return (-1);
}
