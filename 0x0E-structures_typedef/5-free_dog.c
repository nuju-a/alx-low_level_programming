#include "dog.h"

/**
  *free_dog - Function that frees dog
  *@d: pointer to dog
  *
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
