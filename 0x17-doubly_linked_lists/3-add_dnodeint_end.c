#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of a dlist
 * @head: head of the dlist
 * @n: data of the new node
 * Return: address of new node or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr = NULL, *new_node = NULL;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	/* if the dlist is empty */
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	curr = *head;

	while (curr->next)
		curr = curr->next;

	curr->next = new_node;
	new_node->prev = curr;

	return (new_node);
}
