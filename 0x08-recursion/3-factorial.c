#include "main.h"

/**
  *factorial - Entry point
  *@n: the given number
  *Return: returns the factorial or error
  */
int factorial(int n)
{

	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
