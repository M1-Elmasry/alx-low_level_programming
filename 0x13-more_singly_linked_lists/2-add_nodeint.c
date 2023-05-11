#include "lists.h"

/**
 * add_nodeint - function to add node in the beginning of linked list
 * @head: head of the linked list that we want to add in
 * @n: the value of new node
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
