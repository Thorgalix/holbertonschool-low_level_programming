#include "main.h"

/**
* _isdigit - Function for test digit
*
* @c: The character to check (in ASCII code)
* Return: 1 if digit and 0 else
*/

int _isdigit(int c)

{
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);
}
