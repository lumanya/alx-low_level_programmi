#include "dog.h"
/**
 * init_dog - initializes a vraible of type struct
 * @d: pointer to struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of a dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
