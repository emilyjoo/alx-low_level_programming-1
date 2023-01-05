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

	if (n <= 0 || n == 1)
		return (0);
	if (n == 2)
		return (1);
	return (compute_prime(n, 2));
}

/**
 * func - computes the natural square root of a number recursively
 *
 * @n: (int) number whose square root is to be computed
 * @guess: (int) a number greater than 0 used to compute
 * Return: the natural square root n
 */

int func(int n, int guess)
{
	if (guess * guess == n && (guess + 1) * (guess + 1) > n)
		return (guess);
	else
		return (func(n, (guess + n / guess) / 2));
}

/**
 * _sqrt_recursion - computes the natural square root of a number
 *
 * @n: (int) number whose natural square root is to be computed
 * Return: the natural square root n
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n == 1)
		return (1);
	if (n < 0 || is_prime_number(n) == 1)
		return (-1);
	i = func(n, 1);
	return (i);
}
