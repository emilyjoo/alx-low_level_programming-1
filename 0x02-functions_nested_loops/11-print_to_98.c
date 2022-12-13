#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: last number to be printed
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
		}
	}
	else
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
		}
	}
	printf("\n");
}
