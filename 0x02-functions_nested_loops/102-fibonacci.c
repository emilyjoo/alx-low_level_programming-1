#include "main.h"
#include <stdio.h>

/**
 * first_50- prints first 50 fibonacci numbers
 *
 * @n: nummber to be used
 */
void first_50(int n)
{
	int i, j, k, count;

	count = 2;
	printf("%d, %d, ", i = 1, j = 2);
	while (count < n)
	{
		k = i + j;
		if (k < 0)
			k = -(k);
		printf("%d", k);
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
