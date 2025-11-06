#include "main.h"

int is_prime_helper(int n, int i)
{
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
	{
		return (0);
	}
	}
	return (1);
}

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}
