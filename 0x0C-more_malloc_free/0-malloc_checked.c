#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of memory to be allocated
 * Return: pointer to newly allocated memory
*/
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
