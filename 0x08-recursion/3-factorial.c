#include "main.h"

/**
  *factorial - function reurns the fctorial of a given number
  *@n: parameter of type int
  *
  *Return: 0
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
