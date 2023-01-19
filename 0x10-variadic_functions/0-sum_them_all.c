#include "variadic_functions.h"

/**
 * sum_them_all - performs addition operation on all its parameters
 *
 * @n: number of variable arguments
 * Return: sum of parameters passed, otherwise 0
*/
int sum_them_all(const unsigned int n, ...)
{
	size_t i = 0;
	int sum = 0;
	va_list args; /* argument pointer */

	if (n <= 0)
		return (0);

	va_start(args, n); /* initialises args */
	for (; i < n; i++)
		sum += va_arg(args, int);

	va_end(args); /* free args of its list and all memory allocated */

	return (sum);
}
