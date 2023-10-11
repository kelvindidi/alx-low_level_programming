#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
* new_dog - creates a new dog structure
* @name: name
* @age: age
* @owner: owner
* Return: pointer to structure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);

	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	strcpy(d->name,  name);
	d->age = age;
	strcpy(d->owner, owner);
	return (d);
}
