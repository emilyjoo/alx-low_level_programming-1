#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: number to be used
 * Return: returns the last digit of the n
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0 || n == INT_MIN)
		last_digit = -(n % 10);
	else
		last_digit = n % 10;
	_putchar(last_digit + '0');

	return (last_digit);
}
