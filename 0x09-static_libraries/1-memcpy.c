#include "main.h"

/**
  *_memcpy - Entry point
  *Description - function with copy const from source to destination
  *@dest: where character copied is to be stored
  *@src: where character is to be copied from
  *@n: the size of memory
  *Return: returns a pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
