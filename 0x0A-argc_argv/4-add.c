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
	int row, col, sum = 0;

	if (argc > 0)
	{
		/* checks if argument is a number*/
		for (row = argc - 1; row > 0; row--)
		{
			for (col = 0; argv[row][col] != '\0'; col++)
			{
				if (!(isdigit(argv[row][col])) || atoi(argv[row]) < 0)
				{
					printf("Error\n");
					exit(EXIT_FAILURE);
				}
			}
			sum += atoi(argv[row]);
		}
		printf("%d\n", sum);
		exit(EXIT_SUCCESS);
	}
	exit(EXIT_FAILURE);
}
