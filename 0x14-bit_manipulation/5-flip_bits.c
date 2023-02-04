#include "main.h"

/**
 * flip_bits - computes the number of bits to be flipped to get
 * from one number to another
 *
 * @n: (unsigned int) first number
 * @m: (unsigned int) second number
 * Return: number of bits flipped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m & 1))
			count++;
		n >>= 1;
		m >>= 1;
	}
	return (count);
}
