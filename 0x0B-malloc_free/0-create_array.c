#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initialises it with a specific char
 *
 * @size: size of array
 * @c: character to be used to initialise
 * Return: pointer to the array created
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	size_t i = 0;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (!ptr)
		return (NULL);

	for (; i < size; i++)
		*(ptr + i) = c;

	return (ptr);
}
