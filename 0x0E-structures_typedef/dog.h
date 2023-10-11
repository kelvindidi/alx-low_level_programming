#ifndef DOG_H
#define DOG_H

/**
* struct dog - structure of dog name, age and owner
* @name: name element
* @age: age element
* @owner: owner element
* dog_t - Typedef for struct dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
