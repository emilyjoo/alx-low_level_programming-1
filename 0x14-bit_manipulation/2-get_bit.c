#include "main.h"

/**
 * get_bit - gets a bit at a particular index
 *
 * @n: (unsigned int) number to be represented
 * @index: (unsigned int) index position of bit
 * Return: value of the bit at index position or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* checks if index is greater/equal to the number of bits */
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
