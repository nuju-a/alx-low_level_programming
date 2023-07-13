#include "main.h"

/**
  *malloc_checked -  Entry point
  *@b: size parameter
  *
  *Return: 0
  */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL)
	{
		exit (98);
	}
	return (ptr);
}
