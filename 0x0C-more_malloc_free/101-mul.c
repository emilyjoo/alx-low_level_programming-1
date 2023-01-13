#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * main - multiplies two positive numbers
 *
 * @argc: argument count
 * @argv: poiter to array of string
 * Return: 0 on success, otherwise 1
*/
int main(int argc, char **argv)
{
	int row, col, result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (row = argc - 1; row > 0; row--)
	{
		for (col = 0; argv[row][col] != '\0'; col++)
		{
			if (!isdigit(argv[row][col]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	print_number(result);
	_putchar('\n');
	return (0);
}

/**
 * print_number - prints an integer
 *
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
	{
		_putchar('-');
		x = -(n);
	}
	if (x / 10)
		print_number(x / 10);
	_putchar(x % 10 + '0');
}
