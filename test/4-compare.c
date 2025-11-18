#include "comp.h"
/**
 * is_less - checks if a is less than b
 * @a: first integer
 * @b: second integer
 * Return: 1 if true, 0 otherwise
 */
int is_less(int a, int b)
{
	return (a < b);
}

/**
 * is_greater - checks if a is greater than b
 * @a: first integer
 * @b: second integer
 * Return: 1 if true, 0 otherwise
 */
int is_greater(int a, int b)
{
	return (a > b);
}

/**
 * is_equal - checks if a is equal to b
 * @a: first integer
 * @b: second integer
 * Return: 1 if true, 0 otherwise
 */
int is_equal(int a, int b)
{
	return (a == b);
}

/**
 * is_diff - checks if a is different from b
 * @a: first integer
 * @b: second integer
 * Return: 1 if true, 0 otherwise
 */
int is_diff(int a, int b)
{
	return (a != b);
}
