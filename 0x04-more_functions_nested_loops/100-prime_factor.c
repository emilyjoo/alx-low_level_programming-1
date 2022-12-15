#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: 0 on success, otherwise 1
 */
int main(void)
{
	long int number = 612852475143;
	long int div = 2;
	long int index = 0;
	long int array[15];

	while (number > 1)
	{
		if (number % div == 0)
		{
			array[index] = div;
			number = number / div;
			index++;
		}
		else
			div++;
	}
	printf("%lu\n", array[index - 1]);
	return (0);
}
