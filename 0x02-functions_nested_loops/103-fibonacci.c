#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	long int i, j, k, sum;

	i = 1;
	j = sum = 2;
	k = 0;
	while (k < 4000000)
	{
		k = i + j;
		if (k < 0)
			k = -(k);
		if (k % 2 == 0)
			sum += k;

		i = j;
		j = k;
	}
	printf("%lu", sum);
	printf("\n");
	return (0);
}
