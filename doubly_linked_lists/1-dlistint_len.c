#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a doubly linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t size = 0;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}
