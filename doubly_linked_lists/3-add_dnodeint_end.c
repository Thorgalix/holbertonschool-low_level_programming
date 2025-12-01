#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @n: Integer to be added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *n_node;
	dlistint_t *tmp;

	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		n_node->prev = NULL;
		*head = n_node;
		return (n_node);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = n_node;
	n_node->prev = tmp;

	return (n_node);
}
