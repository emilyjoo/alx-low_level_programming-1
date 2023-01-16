#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - user-defined variable for dog objects
 *
 * @name: name of dog object
 * @age: age of dog object
 * @owner: owner of dog object
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif
