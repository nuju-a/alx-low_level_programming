#include "dog.h"
#include <string.h>

/**
  *init_dog - defines a user structure
  *@name: name of the dog
  *@owner: owner of the dog
  *@age: age of the dog
  *
  *Return: pointer to dog
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(strlen(name) + 1);
	strcpy(d->name, name);

	d->owner = malloc(strlen(owner) + 1);
	strcpy(d->owner, owner);

	d->age = age;
}

