#include "main.h"

/**
 * get_endianness - checks the endianness of a system
 *
 * Return: 0 if little endianess, else 1 if big endianess
*/
int get_endianness(void)
{
	int i = 1;
	char *byte;

	byte = (char *)&i; /* set byte to address of i */
	return ((int)*byte); /* returns 0 if little, else 1 */
}
