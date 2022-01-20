#include <stdio.h>
#include "dog.h"

/**
 * new_dog - new properties of dog
 * @name: name of new dog
 * @age: age of dog
 * @owner: property owner
 *
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dg;
	dog_t *nw_d = &dg;

	nw_d->name = name;
	nw_d->age = age;
	nw_d->owner = owner;

	if (!nw_d)
		return (0);

	return (nw_d);
}
