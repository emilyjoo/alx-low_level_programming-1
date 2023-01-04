#include "main.h"

/**
 * factorial - computes the factorial of a given number
 *
 * @n: (int) number
 * Return: factorial of n
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n > 0)
		fact = n * factorial(n - 1);
	return (fact);
}
