#ifndef _MAIN_H
#define _MAIN_H
#include <stdlib.h>

/**
  *struct dog - defines a user structure
  *@name: name of the user
  *@owner: owner of the user
  *@age: age of the user
  */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog;

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
