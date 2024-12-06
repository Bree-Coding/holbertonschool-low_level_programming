#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts a new node at a given position
 * @h: the head of the list
 * @idx: the index of the node
 * @n: a pointer to the number of elements
 * Return: NULL, new_node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	unsigned int x;

	if (idx == 0)
	{
		return (NULL);
	}
	for (x = 0; x < idx; x++)
	{
		if (*h == NULL)
		{
			return (NULL);
		}
		(*h) = (*h)->next;
	}

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = (*h);
	new_node->next = (*h)->next;
	
	(*h)->next->prev = new_node;
	(*h)->next = new_node;
	return (new_node);
}
