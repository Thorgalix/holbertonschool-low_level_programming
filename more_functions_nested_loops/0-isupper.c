#include "main.h"

/**
* _isupper - Function for test uppercase
*
* @c: The character to check (in ASCII code)
* Return: 1 if uppercase and 0 if lowercase
*/

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
