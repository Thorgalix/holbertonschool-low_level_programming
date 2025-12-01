#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - frees a singly linked list
 * @head: pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;
while (head != NULL)
{
	tmp = head;
	head = head->next;
	free(tmp);
}
}
