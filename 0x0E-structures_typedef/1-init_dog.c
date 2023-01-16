#include "dog.h"

/**
 * init_dog - initialises a dog variable
 *
 * @d: dog variable to be initialised
 * @name: name of dog variable
 * @age: age of dog variable
 * @owner: owner of dog variable
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		if (name)
			d->name = name;
		if (age)
			d->age = age;
		if (owner)
			d->owner = owner;
	}
}
