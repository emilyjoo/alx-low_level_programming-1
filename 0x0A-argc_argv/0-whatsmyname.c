#include "main.h"

/**
* main - prints the name of a program
*
* @argc: number of arguments
* @argv: pointer to array of arguments
* Return: 0 if successful, otherwise 1
*/
int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		exit(EXIT_SUCCESS);
	}
	exit(EXIT_FAILURE);
}
