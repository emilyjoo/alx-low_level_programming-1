#include "main.h"

/**
 *  _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer to newly allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	size_t i, array_size;

	array_size = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(array_size);
	if (!ptr)
		return (NULL);

	/* set element in memory to 0 */
	for (i = 0; i < array_size; i++)
		ptr[i] = 0;

	return (ptr);
}
