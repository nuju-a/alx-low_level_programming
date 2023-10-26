#include "main.h"

/**
  *get_bit - function returns the value of a bit at a given index
  *@n: number whoose bit value i want to extract
  *@index: index startin from 0
  *
  *Return: value of the bit at index or -1 if error occurs
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, value;

	if (index >= (sizeof(unsigned long int)) * 8)
		return (-1);

	mask = 1 << index;
	value = (n & mask) >> index;

	return (value);
}
