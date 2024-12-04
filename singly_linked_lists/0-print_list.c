#include "lists.h"

/**
 * print_list - Function that prints all the elements of list_t
 * @h: a poiter to the list
 * Return: the number of node, [0] (nill)
 */

size_t print_list(const list_t *h)
{
	unsigned len = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		len++;
		h = h->next;
	}
return (len);
}
