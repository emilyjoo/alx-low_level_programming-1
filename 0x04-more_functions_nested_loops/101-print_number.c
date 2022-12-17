#include "main.h"
#include <limits.h>

/**
 * print_number - prints an integer
 *
 * @n: integer to be printed
 */
void print_number(int n)
{
	if (n != INT_MIN)
	{
		if (n < 0)
		{
			_putchar('-');
			n = -(n);
		}
		if (n / 10)
			print_number(n / 10);
		_putchar(n % 10 + '0');
	}
	else
		print_INT_MIN(n);
}

/**
 * print_INT_MIN - prints INT_MIN
 *
 * @n: INT_MIN
 */
void print_INT_MIN(unsigned int n)
{
	_putchar('-');
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
