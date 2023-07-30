#include "main.h"

/**
  *array_range - Entry point
  *@min: first parameter
  *@max: second parameter
  *
  *Return: 0
  */
int *array_range(int min, int max)
{
	int size;
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}
