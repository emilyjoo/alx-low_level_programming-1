#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the values of the members of a dog variable
 *
 * Description: for any member with with a NULL value, "(nil)" is printed
 * "(nil)" is also printed if @d id NULL
 *
 * @d: dog variable
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!d->name)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (!d->age)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);

		if (!d->owner)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
