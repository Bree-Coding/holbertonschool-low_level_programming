#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node at the end of
 * a dlistint_t list
 * @head: the head of the list
 * @n: a pointer to the number of elements
 * Return: NULL, new_node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *new_end;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	new_end = *head;

	while (new_end->next != NULL)
	{
		new_end = new_end->next;
	}
	new_end->next = new_node;
	new_node->prev = new_end;
	return (new_node);
}
