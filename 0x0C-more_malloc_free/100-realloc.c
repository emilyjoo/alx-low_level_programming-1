#include "main.h"

/**
 *  _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to previously allocated memory
 * @old_size: size (bytes) of previously allocated memory
 * @new_size: size (bytes) of memory to be newly allocated
 * Return: pointer to newly allocated memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/* no need to reallocate memory */
	if (old_size == new_size || new_size < old_size)
		return (ptr);

	/* zero new size means to free already allocated memory */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* if ptr is not null first free it before reallocating memory */
	/* if ptr is null proceed to reallocate memory */
	if (ptr != NULL)
		free(ptr);
	ptr = malloc(new_size);
	if (!ptr)
		return (NULL);

	return (ptr);
}
