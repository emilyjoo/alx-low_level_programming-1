#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 * for multiples of 3 it prints 'Fizz'
 * for multiples of 5, it prints 'Buzz'
 * for multiples of 5 and 3, it prints 'FizzBuzz'
 *
 * Return: 0 on success, otherwise 1
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i == 100)
			break;
		printf(" ");
	}
	printf("\n");
	return (0);
}
