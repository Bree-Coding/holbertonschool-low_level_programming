#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end of a list_t list
 * @head: a pointer to the first parameter of the list
 * @str: a pointer to the list
 * Return: NULL, new_node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length;
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	
	for (length = 0; str[length] != '\0'; length++)
	{
		new_node->len = length;
		new_node->next = NULL;
	}
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
			temp->next = new_node;
		}
	return (new_node);
}
