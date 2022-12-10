#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns random number to a variable n
 *
 * Description: the program also checks whether the
 * number generated is positive, negative or a zero
 *
 * Return: returns 0 if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
