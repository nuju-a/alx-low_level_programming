#ifndef MAIN_H
#define MAIN_H

/*standard lib*/
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/*function prototype*/
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

#endif /*MAIN_H*/
