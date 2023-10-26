#include "main.h"

/**
 *flip_bits - returns the number of bits i need to flip from one number to another
 *@n: first number
 *@m: second number
 *
 *Return: numbers of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	int count;

	flip = n ^ m;

	count = 0;

	while (flip != 0)
	{
		if ((flip & 1) == 1)
			count++;
		flip = flip >> 1;
	}
	return (count);
}
