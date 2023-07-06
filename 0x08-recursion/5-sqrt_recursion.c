#include "main.h"

/**
  *_sqrt_recursion - Entry point
  *@n: natural number given
  *
  *Return: sqrt of natural number
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if  (n == 1 || n == 0)
	{
		return (n);
	}
	return (_sqrt_recursion((n)));
}
