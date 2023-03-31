#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_node - add node at the beging of linked list
 * @head: head of the linked list
 * @str: element in data of node
 * Return: address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (!head)
		return (NULL);

	node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node->str = strdup(str);

	if (!node->str)
		free(node);
		return (NULL);

	node->len = strlen(node->str);
	node->next = *head;
	*head = node;

	return (node);
}
