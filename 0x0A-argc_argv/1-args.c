#include "main.h"

/**
* main - prints the number of arguments passed into it
*
* @argc: number of arguments
* @argv: pointer to array of arguments
* Return: 0 on sucess, otherwise 1
*/
int main(int argc, char **argv __attribute__((unused)))
{
	int count = -1;

	if (argc > 0)
	{
		while (argc--)
			count++;
		printf("%d\n", count);
		exit(EXIT_SUCCESS);
	}
	exit(EXIT_FAILURE);
}
