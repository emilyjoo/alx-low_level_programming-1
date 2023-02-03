#include "main.h"

/**
 * clear_bit - sets digit at index position to 0
 *
 * @n: (unsigned int) number to be represented
 * @index: position of bit to be set
 * Return: On success -1, otherwise -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* checks if index is greater/equal to the number of bits */
	if (index >= sizeof(n) * 8)
		return (-1);

	/*checks if digit is 1*/
	if ((1 << index) & *n)
		*n ^= (1 << index);
	return (1);
}
