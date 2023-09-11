#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str);

/**
 * new_dog - Creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: new dog (dog_t)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);
	dog->name = _strdup(name);
	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}
	dog->age = age;
	dog->owner = _strdup(owner);
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	return (dog);
}


/**
 * *_strdup - Returns pointer to a copy of another string
 * @str: string to contain copy
 *
 * Return: Pointer to newly created string if success, 0 if not
 */

char *_strdup(char *str)
{
	int i;
	int length;
	char *p;

	if (!str)
		return (NULL);

	length = strlen(str);

	p = malloc((length + 1) * sizeof(char));

	if (!p)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		*(p + i) = *(str + i);
	}

	*(p + i) = '\0';

	return (p);
}
