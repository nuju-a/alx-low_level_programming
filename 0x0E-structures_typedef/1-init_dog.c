#include "dog.h"

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
	/*d = malloc(sizeof(struct dog));

	if (d == NULL)
	{
		printf("NULL\n");
	}
	return;*/

		d->name = name;
		d->owner = owner;
		d->age = age;
}

