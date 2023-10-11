#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints the elements of a variable of struct dog
 * @d: pointer to struct variable
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
	}
	printf("Name: %s\n", d->name);
	printf("Age: %.2f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
