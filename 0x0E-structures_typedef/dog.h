#ifndef doggy
#define doggy
#include <stdlib.h>
/**
 * struct dog - dog is a pet, collecting its name and owner name with age
 * @name: name of dog
 * @age: age of dog
 * @owner: owners name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* doggy */