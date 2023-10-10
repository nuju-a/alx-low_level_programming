#include "dog.h"

/**
  *newdog - Function that creates a new dog
  *@name: New dog name
  *@age: New dog age
  *@owner: New dog owner
  *
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		printf("NULL");
		return (0);
	}
	else
	{
		new_dog->name = strdup(name);
		new_dog->age = age;
		new_dog->owner = strdup(owner);
		return (new_dog);
	}
}
