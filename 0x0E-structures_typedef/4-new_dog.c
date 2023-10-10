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
	dog_t *newdog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	newdog = malloc(sizeof(struct dog));
	if (newdog == NULL)
	{
		return(NULL);
	}
	else
	{
		newdog->name = strdup(name);
		newdog->age = age;
		newdog->owner = strdup(owner);
		return (newdog);
	}
	free(newdog);
}
