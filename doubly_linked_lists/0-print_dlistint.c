#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements of a dlistint_t list
 * @h: head of the list
 * Return: 0, len
 */

size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
