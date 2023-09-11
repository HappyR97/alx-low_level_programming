#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: Pointer to struct
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: ");
	if (!d->name)
		printf("(nil)\n");
	else
		printf("%s\n", d->name);
	printf("Age: ");
	if (d->age < 0)
		printf("(nil)\n");
	else
		printf("%f\n", d->age);
	printf("Owner: ");
	if (!d->owner)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);
}
