#include "main.h"

/**
 * get_endianness - checks the endianness of a system
 *
 * Return: 0 if little endianess, else 1 if big endianess
*/
int get_endianness(void)
{
	int word = 0x0001;
	char *byte;

	byte = (char *)&word;
	return (byte[0] ? 0 : 1);
}
