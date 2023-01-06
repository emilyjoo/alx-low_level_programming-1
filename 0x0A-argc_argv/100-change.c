#include "main.h"

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money
 *
 * @argc: number of argument
 * @argv: pointer to array of arguments
 * Return: 0 on success, otherwise 1
*/
int main(int argc, char **argv)
{
	int cents;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
		printf("0\n");

	coins += cents / 25;
	cents %= 25;

	coins += cents / 10;
	cents %= 10;

	coins += cents / 5;
	cents %= 5;

	coins += cents / 2;
	cents %= 2;

	coins += cents;

	printf("%d\n", coins);
	exit(EXIT_SUCCESS);
}
