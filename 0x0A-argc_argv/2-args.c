#include "main.h"

/**
* main - prints all the arguments it receives
*
* @argc: number of arguments
* @argv: pointer to array of arguments
* Return: 0 on success, otherwise 1
*/
int main(int argc, char **argv)
{
	int i = 0;

	if (argc > 0)
	{
		while (argc--)
			printf("%s\n", argv[i++]);
		exit(EXIT_SUCCESS);
	}
	exit(EXIT_FAILURE);
}
