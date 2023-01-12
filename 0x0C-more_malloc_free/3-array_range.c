#include "main.h"

/**
 * array_range - creates an array of integers
 * The array will contain all values from min (included) to max (included)
 *
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to newly created array
*/
int *array_range(int min, int max)
{
	int array_size, i;
	int *ptr;

	if (min > max)
		return (NULL);

	array_size = min + max + 1;
	ptr = malloc(sizeof(int) * array_size);
	if (!ptr)
		return (NULL);

	for (i = 0; i < array_size; i++)
		ptr[i] = min + i;

	return (ptr);
}
