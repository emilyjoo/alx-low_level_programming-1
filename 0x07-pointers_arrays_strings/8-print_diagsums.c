#include "main.h"
#include <stdio.h>


void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[i][j];
			else if (i == 0 && j == size - 1)
			{
				for (; i <= size - 1; i++)
				{
					sum2 += a[i][j];
					j--;
				}
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
