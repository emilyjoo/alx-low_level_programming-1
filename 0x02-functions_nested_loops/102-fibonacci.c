#include "main.h"
#include <stdio.h>

/**
 * first_50- prints first 50 fibonacci numbers
 *
 * @n: nummber to be used
 */
void first_50(int n)
{
	long long int i, j, k;
	int count;

	count = 2;
	printf("%llu, %llu, ", i = 1, j = 2);
	while (count < n)
	{
		k = i + j;
		if (k < 0)
			k = -(k);
		printf("%llu", k);
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
	first_50(50);
	return (0);
}
