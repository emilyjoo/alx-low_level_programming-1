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

	if (n <= 0 || !separator)
		return;

	va_start(args, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
