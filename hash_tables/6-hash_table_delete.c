#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table
 * @ht: Pointer to the hash table
 *
 * Description: Frees all nodes, their keys and values, the array,
 * and the hash table itself. Does nothing if ht is NULL.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp;

	if (ht == NULL)
	return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
