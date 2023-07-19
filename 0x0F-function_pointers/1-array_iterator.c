#include "function_pointers.h"

/**
  *array_iterator - function name entry point
  *@array: agrument of datatype function
  *@action: function pointer
  *@size: array size
  *
  *Return: pointer
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
