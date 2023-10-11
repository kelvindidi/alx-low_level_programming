#include "dog.h"
#include <stdio.h>

/**
 * init_dog - a function that initialize a variable of typ struct dog
 * @name: element name
 * @age: age
 * @owner: owner
 * @d: pointer to struct variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
