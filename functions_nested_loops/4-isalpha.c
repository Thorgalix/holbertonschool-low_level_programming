#include "main.h"

/**
 * _isalpha - checks if a character is lowercase
 * or uppercase
 * @c: The character to check (in ASCII code)
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	return (1);
	else
	return (0);
}
