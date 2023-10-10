#include "dog.h"

/**
  *print_dog - Function prints a struct dog
  *@d: struct initialization
  *
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL || d->owner == NULL || d->age < 0)
	{
		printf("nil");
		return;
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);

	}
}
