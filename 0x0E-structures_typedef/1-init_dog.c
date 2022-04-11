#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable type struct dog
 * @d: a pointer
 * @name: a pointer
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
