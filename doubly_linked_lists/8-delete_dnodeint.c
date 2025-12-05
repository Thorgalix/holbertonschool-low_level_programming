#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a node at
 * a given index in a doubly linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to delete (0-based)
 *
 * Return: 1 if successful, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *to_del;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0) /*sup 1e noeud*/
	{
		tmp = *head;
		*head = (*head)->next;
		if (*head != NULL)
		(*head)->prev = NULL;

		free(tmp);
		return (1);
	}
	tmp = *head;
	while (i < index - 1 && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL || tmp->next == NULL)
	return (-1);

	to_del = tmp->next;
	tmp->next = to_del->next;
	if (to_del->next != NULL)
	to_del->next->prev = tmp;

	free(to_del);
	return (1);
}
