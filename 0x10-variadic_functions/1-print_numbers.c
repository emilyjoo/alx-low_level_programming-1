#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers passed as parameters
 *
 * @separator: string to be printed between numbers
 * @n: number of numbers passed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	size_t i = 0;
	int num;

	if (n <= 0 || !n)
		return;

	va_start(args, n);
	for (; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
