#include "function_pointers.h"

/**
  *int_index - Entry point
  *@array: pointer of return type int
  *@size: number of elements in an arraey
  *@cmp: function pointer to array
  *
  *Return: return an integer
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	if (size <= 0)
	{
		return (-1);
	}
	return (-1);
}
