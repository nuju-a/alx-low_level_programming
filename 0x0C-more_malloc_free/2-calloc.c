#include "main.h"

/**
  *_calloc - Allocates memory for an array of nmemb elemts
  *@nmemb: The number of elements
  *@size: The byte size of each element
  *
  *Return: returns pointer to allocated memeory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem_alloc;
	char *alloc_init;
	unsigned int loop;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mem_alloc = malloc(size * nmemb);

	if (mem_alloc == NULL)
	{
		return (NULL);
	}
	alloc_init = mem_alloc;

	for (loop = 0; loop < (size * nmemb); loop++)
		alloc_init[loop] = '\0';

	return (mem_alloc);
}
