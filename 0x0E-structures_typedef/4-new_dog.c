#include "dog.h"

/**
  *new_dog - Function that creates a new dog
  *@name: New dog name
  *@age: New dog age
  *@owner: New dog owner
  *
  *Return: 0
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}
	newdog->name = malloc(sizeof(char) * strlen(name) + 1);
	newdog->owner = malloc(sizeof(char) * strlen(owner) + 1);

	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}

	strcpy(newdog->name, name);
	newdog->age = age;
	strcpy(newdog->owner, owner);

	return (newdog);

}
