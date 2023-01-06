#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: 0 on success, otherwise 1
*/
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		exit(EXIT_SUCCESS);
	}
	else
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
}
