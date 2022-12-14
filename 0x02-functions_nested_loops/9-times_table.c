#include "main.h"
#include <stdio.h>

/**
 * times_table - prints 9 times table
 *
 */
void times_table(void)
{
	int i, j;

	i = 0;
	for (; i < 10; i++)
	{
		j = 0;
		for (; j < 10; j++)
		{
			if ((i * j) < 10 && j > 0)
				printf(",  ");
			if (i * j >= 10)
				printf(", ");

			printf("%d", i * j);

			if (j == 9)
			{
				printf("\n");
				break;
			}
		}
	}
}
