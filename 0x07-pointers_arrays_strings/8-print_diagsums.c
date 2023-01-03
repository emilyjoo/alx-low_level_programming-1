#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: pointer to int array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, pos1, pos2, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		pos1 = (size * i) + i;
		sum1 += *(a + pos1);
	}
	for (i = 0; i < size; i++)
	{
		pos2 = (i * size) + (size - 1 - i);
		sum2 += *(a + pos2);
	}
	printf("%d, %d\n", sum1, sum2);
}
