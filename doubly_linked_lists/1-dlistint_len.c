#include "lists.h"

/**
 * dlistint_len - Function that returns the number of elements
 * in a linked dlistint_t list
 * @h: head of the list
 * Return: 0, len
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
