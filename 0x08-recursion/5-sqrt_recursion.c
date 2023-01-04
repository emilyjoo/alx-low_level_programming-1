#include "main.h"

/**
 * _sqrt_recursion - computes the natural square root of a number
 *
 * @n: (int) number whose natural square root is to be computed
 * Return: the natural square root n
 */
int _sqrt_recursion(int n)
{
	int sqrt, temp;

	sqrt = n / 2;
	temp = 0;
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	while (sqrt != temp)
	{
		temp = sqrt;
		sqrt = (n / temp + temp) / 2;
		if (sqrt * sqrt == n)
			return (sqrt);
	}
	return (-1);
}
