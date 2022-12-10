#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to a variable n
 * each time it is executed
 *
 * Description: the program also checks for various condtions:
 * if the last digit of the generated number is greater than 5,
 * equal to 0 or less than 6 but not 0.
 *
 * Return: returns 0 if successful
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;
	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d and is less ", n, last_digit);
		printf("than 6 and not 0\n");
	}
	return (0);
}
