#include "main.h"

/**
  *set_bit - function that sets the value of a bit to 1 at a given index
  *@n: pointer to number whose bit value i want to set
  *@index: index starting from zero
  *
  *Return: 1 or -1 in case of an error
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int)) * 8)
		return (-1);

	mask = 1UL << index;
	*n = (*n | mask);

	return (1);
}
