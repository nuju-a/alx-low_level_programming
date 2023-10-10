#ifndef MAIN_H
#define MAIN_H

/*standard lib*/
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/*struct definition*/
/**
  *struct dog - User defined
  *@name: Gives the name of the struct dog
  *@age: Gives the age of the struct dog
  *@owner: Tells the owner of struct dog
  *
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/*function prototype*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /*MAIN_H*/
