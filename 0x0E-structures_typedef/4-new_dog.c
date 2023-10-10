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

	newdog->name = strndup(name, strlen(name));
	newdog->age = age;
	newdog->owner = strndup(owner, strlen(owner));

	return (newdog);

}
