#include "main.h"
#include <stdio.h>

/**
 * _power - computes the value of x raised to the power of y
 *
 * @x: (unsigned int) a number
 * @y: (unsigned int) power
 * Return: the value of x raised to the power of y
 */
unsigned int _power(unsigned int x, unsigned int y)
{
	unsigned int pow;

	if (y == 0)
		return (1);
	if (y > 0)
	{
		y--;
		pow = x * _power(x, y);
	}
	return (pow);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: string of 0 or 1 characters
 * Return: NULL if b is NULL. 0 if one or more chars in b is not 0 or 1.
 * Otherwise, the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, num = 0, size = 0;

	if (!b)
		return (0);

	/* get number of bits */
	for (i = 0; b[i] != '\0'; ++i)
	{
		if (b[i] == '0' || b[i] == '1')
			++size;
		else
			return (0);
	}

	for (j = 0; j < size; ++j)
	{
		if (b[size - j - 1] == '1')
			num += _power(2, j);
	}
	return (num);
}
