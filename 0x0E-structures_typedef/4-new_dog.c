#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - Entry point
 * newDog - new dog prop
 * @name: dog's name
 * @age: dog's age
 * @owner: owner.
 *
 * Description: Dog's prop
 * Return: newDog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		exit(EXIT_FAILURE);
	}

	newDog->name = malloc(strlen(name) + 1);

	if (newDog->name == NULL)
	{
		free(newDog);
		exit(EXIT_FAILURE);
	}
	strcpy(newDog->name, name);

	newDog->owner = (char *)malloc(strlen(owner) + 1);

	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		exit(EXIT_FAILURE);
	}
	strcpy(newDog->owner, owner);


	newDog->age = age;

	return (newDog);
}
