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
	unsigned long int a, b, count = 0;
	int i;

	for (i = (sizeof(int) * 8); i >= 0; i--)
	{
		a = (n >> i) & 1;
		b = (m >> i) & 1;
		if (a != b)
			count++;
	}
	return (count);
}
