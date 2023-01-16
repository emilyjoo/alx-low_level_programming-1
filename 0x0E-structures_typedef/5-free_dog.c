#include "dog.h"

/**
 * free_dog - frees memory allocated to dog objects
 *
 * @d: pointer to dog object
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
