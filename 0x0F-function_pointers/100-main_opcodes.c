#include <stdio.h>

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
	void *main_add;
	unsigned char *opcodes;
	char *separator = " ";

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
	/* get the address of the main function */
	main_add = (void *)main;

	/* get opcodes of main function */
	opcodes = (unsigned char *)main_add;

	/* print 'bytes' opcode */
	for (; i < bytes; ++i)
	{
		printf("%02x", opcodes[i]);
		if (i < bytes - 1)
			printf("%s", separator);
	}
	printf("\n");
	return (0);
}
