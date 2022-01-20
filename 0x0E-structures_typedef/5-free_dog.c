#include "dog.h"

/**
 * free_dog - free struct pointer from heap memory
 * @d: new dog in memory
 */

void free_dog(dog_t *d)
{
	d = malloc(sizeof(dog_t));

	if (!d)
		return;
	else
		free(d);
}
