#include "lists.h"

/**
 * free_list - Function that frees list
 * @head: the first line of the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
