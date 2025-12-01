#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Double pointer to the head of the list.
 * @str: String to be added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_first;
	unsigned int length = 0;

	new_first = malloc(sizeof(list_t));
	if (new_first == NULL)
	{
		return (NULL);
	}
	new_first->str = strdup(str);
	if (new_first->str == NULL)
	{
		free(new_first);
		return (NULL);
	}
	while (str[length] != '\0')
    {
		length++;
	}
	new_first->len = length;
	new_first->next = *head;
	*head = new_first;
	return (new_first);
}
