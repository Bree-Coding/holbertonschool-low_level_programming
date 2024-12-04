#include "lists.h"

/**
 * list_len - Function that adds a new node at the beginning of a list_t list
 * @h: pointer to the list
 * Return: number of node
 */

size_t list_len(const list_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}

return (len);
}
