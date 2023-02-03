#include "main.h"

/**
 * set_bit - sets bit at index position to 1
 *
 * @n: (unsigned int) number to be represented
 * @index: position of bit to be changed
 * Return: 1 if successsful, otherwise -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	/* checks if index is greater/equal to the number of bits */
	if (index >= sizeof(n) * 8)
		return (-1);

	*n |= (1 << index);
	return (1);
}
