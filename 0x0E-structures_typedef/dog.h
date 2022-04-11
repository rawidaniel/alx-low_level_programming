#ifndef DOG_H
#define DOG_H
/**
 * struct dog - informtion about the dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: the structure of dog have a detail information
 * about the dog name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* #ifndef DOG_h */
