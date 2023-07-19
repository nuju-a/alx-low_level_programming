#include "dog.h"
#include <string.h>
#include <stdio.h>

/**
  *print_dog - defines a user structure
  *@d: structure argument
  *
  *Return: pointer to dog
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else if (d->owner == NULL || d->name == NULL)
	{
		printf("nil\n");
		return;
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}

}
