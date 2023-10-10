#ifndef MAIN_H
#define MAIN_H

/*standard lib*/
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

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
/**
  *dog_t - Typedef for struct dog
  */
typedef struct dog dog_t;

/*function prototype*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*MAIN_H*/
