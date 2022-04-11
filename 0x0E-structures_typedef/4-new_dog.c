#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 * Return: a pointer or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;

	dog_new = malloc(sizeof(dog_t));
	if (dog_new == NULL)
		return (NULL);
	dog_new->name = name;
	dog_new->age = age;
	dog_new->owner = owner;
	return (dog_new);
}
