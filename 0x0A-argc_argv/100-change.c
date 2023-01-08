#include "main.h"

/**
 * main - prints the minimum cent of coins to make
 * change for an amount of money
 *
 * @argc: cent of argument
 * @argv: pointer to array of arguments
 * Return: 0 on success, otherwise 1
*/
int main(int argc, char **argv)
{
	int cent, coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	cent = atoi(argv[1]);
	if (cent == 0 || cent < 0)
	{
		printf("0\n");
		exit(EXIT_SUCCESS);
	}
	while (cent > 0)
	{
		if (cent >= 25)
			cent -= 25;
		else if (cent >= 10)
			cent -= 10;
		else if (cent >= 5)
			cent -= 5;
		else if (cent >= 2)
			cent -= 2;
		else if (cent >= 1)
			cent -= 1;
		coin++; /* incremented every time a change is made */
	}
	printf("%d\n", coin);
	exit(EXIT_SUCCESS);
}
