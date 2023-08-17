#include "lists.h"


/**
 * add_dnodeint - add node at the beginning of a dlist
 * @head: head of the dlist
 * @n: data of the new node
 * Return: address of the new node or NULL if failea
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	if (new_node->next)
		new_node->next->prev = new_node;
	new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}
