#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: an array of integers
 * @size: size of @array
 * @cmp: pointer to function that performs comparison
 *
 * Return: index of the first element for which
 * @cmp does not return 0, otherwise return -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0 && array && cmp)
	{
		for (; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
