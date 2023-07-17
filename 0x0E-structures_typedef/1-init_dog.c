#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function to initialise variable
 * @d: points to struct dog
 * @name: char name of dog
 * @age: float age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
