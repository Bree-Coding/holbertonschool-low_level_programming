#include "lists.h"

/**
 * get_dnodeint_at_index - Function that returns the nth node of
 * a dlistint_t linked list
 * @head: the head of the list
 * @index: the index of the node
 * Return: NULL, head
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	for (x = 0; x < index; x++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
