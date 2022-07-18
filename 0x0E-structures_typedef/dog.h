#include <stddef.h>
#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct doling dogs character
 * @name: pointer to name of dog
 * @age: pointer to age
 * @owner: pointer to owner
 */
struct dog
{
	char *name;
	float  age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
