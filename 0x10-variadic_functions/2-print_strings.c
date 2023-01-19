#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings passed as parameters
 *
 * @separator: string to be printed between strings
 * @n: number of strings passed
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	size_t i = 0;
	char *temp;

	if (n <= 0)
		return;

	va_start(args, n);
	for (; i < n; i++)
	{
		temp = va_arg(args, char *);
		if (temp)
		printf("%s", temp);
		else
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
