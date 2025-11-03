#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the byte to fill the memory with
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
