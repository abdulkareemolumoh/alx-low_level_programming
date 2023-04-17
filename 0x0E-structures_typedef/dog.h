#ifndef MY_HEADER_H
#define MY_HEADER_H

/**
 * struct dog - my dog prop.
 * dog_t *new_dog - dog prop.
 * @name: my dog's name.
 * @age: my dog's age.
 * @owner: my dog's owner
 *
 * Description: This shows my dog's proerties.
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

#endif
