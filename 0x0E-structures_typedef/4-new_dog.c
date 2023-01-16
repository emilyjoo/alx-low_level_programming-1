#include "dog.h"

/**
 * _strcpy - copies a string
 *
 * @dest: destination string
 * @src: source string
 */
void _strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
}

/**
 * _strlen - computes the length of a string
 *
 * @s: pointer to string
 * Return: returns the length of a string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * new_dog - create a new dog variable
 *
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: NULL if function fails, otherwise, a pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *name_copy, *owner_copy;

	if (name && age && owner)
	{
		/* + 1 for null terminator */
		name_copy = malloc(_strlen(name) + 1);
		if (!name_copy)
			return (NULL);
		owner_copy = malloc(_strlen(owner) + 1);
		if (!owner_copy)
			return (NULL);

		_strcpy(name_copy, name);
		_strcpy(owner_copy, owner);

		newDog = malloc(sizeof(dog_t) + _strlen(name) + _strlen(owner));
		if (!newDog)
			return (NULL);

		/* initialise values for new dog */
		newDog->name = name_copy;
		newDog->age = age;
		newDog->owner = owner_copy;

		return (newDog);
	}

	return (NULL);
}
