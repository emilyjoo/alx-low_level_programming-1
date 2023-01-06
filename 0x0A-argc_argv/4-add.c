#include "main.h"

/**
 * main - adds positive numbers
 *
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: 0 on success, otherwise 1
*/
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc > 0)
	{
		for (i = argc - 1; i > 0; i--)
		{
			if (strtol(argv[i], NULL, 10) && atoi(argv[i]) > 0) /* checks if argument is a number*/
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				exit(EXIT_FAILURE);
			}
		}
		printf("%d\n", sum);
		exit(EXIT_SUCCESS);
	}
	exit(EXIT_FAILURE);
}
