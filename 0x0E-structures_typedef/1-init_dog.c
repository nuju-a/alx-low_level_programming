#include "dog.h"
#include <string.h>
#include <stdio.h>

/**
  *init_dog - defines a user structure
  *@name: name of the dog
  *@owner: owner of the dog
  *@age: age of the dog
  *@d: struct type
  *Return: pointer to dog
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	/*
	d->name = malloc(strlen(name) + 1);
	strcpy(d->name, name);

	d->owner = malloc(strlen(owner) + 1);
	strcpy(d->owner, owner);*/
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}

