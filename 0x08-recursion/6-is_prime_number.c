#include "main.h"

/**
 * compute_prime - checks for prime number recursively
 *
 * @n: number to be checked
 * @i: variable used to check
 * Return: 1 if n is a prime number, otherwise 0
 */
int compute_prime(int n, int i)
{
	if (i >= n)
		return (1);
	if (n % i == 0)
		return (0);
	return (compute_prime(n, i + 1));
}

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
	if (n == 2)
		return (1);
	i = compute_prime(n, 2);
	if (i == 0)
		return (0);
	return (1);
}
