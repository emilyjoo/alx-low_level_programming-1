#include "main.h"

/**
 * swap_int - swap the values of two integers
 *
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int temp; /* to temporarily hold a value */

	temp = *b;
	*b = *a;
	*a = temp;
}
