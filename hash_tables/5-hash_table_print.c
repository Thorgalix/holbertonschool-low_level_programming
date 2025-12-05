#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table
 * @ht: Pointer to the hash table
 *
 * Description: Prints the key/value pairs in the order they appear
 * in the array. If the table is NULL, nothing is printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int f = 1;

	if (ht == NULL)
	return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (!f)
			printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			f = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
