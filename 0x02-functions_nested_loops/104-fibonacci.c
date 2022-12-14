#include "main.h"
#include <stdio.h>

/**
 * first_98- prints first 98 fibonacci numbers
 *
 * @n: nummber to be used
 */
void first_98(int n)
{
	long int i, j, k;
	int count;

	count = 2;
	printf("%lu, %lu, ", i = 1, j = 2);
	while (count < n)
	{
		k = i + j;
		if (k < 0)
			k = -(k);
		printf("%lu", k);
		if (count == n - 1)
		{
			printf("\n");
			break;
		}
		printf(", ");
		i = j;
		j = k;
		count++;
	}
}

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	first_98(98);
	return (0);
}
