#include "main.h"

/**
 * _pow_recursion - computes the value of x raised to the power of y
 *
 * @x: (int) a number
 * @y: (int) power
 * Return: the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
	{
		y--;
		pow = x * _pow_recursion(x, y);
	}
	return (pow);
}
