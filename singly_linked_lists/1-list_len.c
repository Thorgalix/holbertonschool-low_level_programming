#include <stdio.h>
#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t list_len(const list_t *h)
{
	int size = 0;

	if (h == NULL)
	{
		return (size);
	}
	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
