#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializing into struct dog
 * @d: takes from struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
