#include "main.h"

/**
  *_pow_recursion - function returns the value of x raised to the power of y
  *@x: the base parameter of data type int
  *@y: the power parameter of type int
  *
  *Return: 0
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
