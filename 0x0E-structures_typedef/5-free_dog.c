#include "dog.h"
#include <stdlib.h>

/**
* free_dog - a function that frees dogs.
* @d: pointer to a struct variable
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
