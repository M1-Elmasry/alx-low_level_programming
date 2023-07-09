#include "lists.h"

/**
 * add_nodeint_end - and new node at the end of linked list
 * @head: head of the linked list
 * @n: the value of new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t)), *curr;

	if (!node)
	{
		free(node);
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (!*head)
	{
		*head = node;
		return (node);
	}

	curr = *head;

	while (curr->next)
	{
		curr = curr->next;
	}

	curr->next = node;

	return (node);
}
