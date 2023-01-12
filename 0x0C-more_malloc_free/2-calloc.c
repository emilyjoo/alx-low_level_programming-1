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

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * nmemb * size);
	if (!ptr)
		return (NULL);

	return (ptr);
}
