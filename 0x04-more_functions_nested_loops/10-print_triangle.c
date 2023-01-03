#include "main.h"

/**
 *  print_triangle - prints a triangle using the '#' character
 *
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, j, k, m;

	if (size == 0)
		_putchar('\n');
	for (i = size; i > 0; i--)
	{
		for (j = i; j > 1; j--)
		_putchar(' ');
		m = size - (i - 1);
		for (k = 0; k < m; k++)
			_putchar('#');
		_putchar('\n');
	}
}
