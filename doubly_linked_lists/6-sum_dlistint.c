#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all the data
 * (n) of a dlistint_t linked list
 * @head: the head of the list
 * Return: 0, sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
