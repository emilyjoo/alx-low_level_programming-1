#include "main.h"

/**
 * is_prime_number - checks if n is a prime number
 *
 * @n: number to be checked
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 0 || n == 1)
		return (0);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
