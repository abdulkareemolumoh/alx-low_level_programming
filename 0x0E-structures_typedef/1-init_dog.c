#include "dog.h"

/**
 * init_dog - my dog prop
 * @name: my dog's name.
 * @age: my dog's age.
 * @owner: my dog's owner
 * @d: user.
 * Return: Zero.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
