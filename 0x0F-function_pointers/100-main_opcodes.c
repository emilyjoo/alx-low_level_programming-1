#include <stdio.h>
#include "function_pointers.h"

/**
 * main - prints the opcode of its main function
 *
 * @argc: number of arguments
 * @argv: pointer to the array of arguments
 * Return: 0 if successful, else any other number
*/
int main(int argc, char **argv)
{
	int i = 0, bytes;
	unsigned char *opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* get opcodes of main function using address of main function */
	opcodes = (unsigned char *)main;

	/* print 'bytes' opcode */
	for (; i < bytes; ++i)
	{
		printf("%02x", opcodes[i]);
		if (i < bytes - 1)
			printf("%s", " ");
	}
	printf("\n");
	return (0);
}
