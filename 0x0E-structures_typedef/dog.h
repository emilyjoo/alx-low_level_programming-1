#ifndef DOG_H
#define DOG_H

/**
 * struct dog - user-defined variable for dog objects
 *
 * @name: name of dog object
 * @age: age of dog object
 * @owner: owner of dog object
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};


/* function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
