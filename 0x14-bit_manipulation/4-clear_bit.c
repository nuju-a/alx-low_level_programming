#include "main.h"

/**
  *clear_bit - sets the value of a bit to 0 at a given index
  *@n: pointer to bit value to be set
  *@index: starts from zero
  *
  *Return: 1 or -1 in case of error
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int)) * 8)
		return (-1);

	mask = 1UL << index;

	*n = (*n & ~mask);

	return (1);
}
