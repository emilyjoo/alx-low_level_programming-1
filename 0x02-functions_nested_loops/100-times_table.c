#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints n times table
 *
 * @n: (int) must be greater than 0 and less than 15
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
		return;
	i = 0;
	for (; i <= n; i++)
	{
		j = 0;
		for (; j <= n; j++)
		{
			if ((i * j) < 10 && j > 0)
				printf(",   ");
			if ((i * j >= 10) && (i * j < 100))
				printf(",  ");
			if ((i * j) >= 100)
				printf(", ");

			printf("%d", i * j);

			if (j == n)
			{
				printf("\n");
				break;
			}
		}
	}
}
