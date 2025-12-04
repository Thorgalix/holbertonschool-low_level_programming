#include <stddef.h>
#include "hash_tables.h"
/**
 * key_index - create hash table
 * @key: the key of the index
 * @size: size of the array
 *
 * Return: h modulo size
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h;

	if (key == NULL || size == 0)
	{
		return (0);
	}
	h = hash_djb2(key);
	return (h % size);
}
