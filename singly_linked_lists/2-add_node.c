#include "lists.h"

/**
 * add_node - Function that adds a new node at the beginning of a list_t list
 * @head: a pointer to the first line of the list
 * @str: a pointer to the list
 * Return: new_node, NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int length = 0;
	list_t *new_node;
	char *duplicate;

	new_node = malloc(sizeof(list_t));

	if (str == NULL)
	{
		return (NULL);
	}
	if (new_node == NULL)
	{
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}

	duplicate = strdup(str);

	if (duplicate == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = duplicate;
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
