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
	int cent, coin;

	if (argc != 2)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	cent = atoi(argv[1]);
	if (cent == 0 || cent < 0)
		printf("0\n");
	while (cent > 0)
	{
		if (cent >= 25)
			cent -= 25;
		if (cent >= 10)
			cent -= 10;
		if (cent >= 5)
			cent -= 5;
		if (cent >= 2)
			cent -= 2;
		if (cent >= 1)
			cent -= 1;
		coin++; /* incremented every time a change is made */
	}
	printf("%d\n", coin);
	exit(EXIT_SUCCESS);
}
