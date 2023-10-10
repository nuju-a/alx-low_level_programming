#include "dog.h"
/**
  *init_dog - Function that initializes the variabel for struct dog
  *@d: pointer to the struct dog
  *@name: Type char that declares the variable name
  *@age: Type float that declares the varieable age
  *@owner: Type char that declares the variable owner of struct dog
  *
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
