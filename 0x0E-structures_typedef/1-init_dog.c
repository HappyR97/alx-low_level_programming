#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: struct to initialize
 * @name: member of the struct specifying dog's name
 * @age: member of the struct specifying dog's age
 * @owner: member of the struct specifying dog's owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
