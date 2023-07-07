#include "main.h"

/**
  *_memset - Entry point
  *Description - function fills the first n bytes of the memory area pointed
  *@s: starting address of the memory to be filled
  *@b: constant byte value to be filled
  *@n: size of memory to be filled
  *Return: return a pointer to the memory s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
