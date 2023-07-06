#include "main.h"
/*#include "math.h"*/

/**
  *_pow_recursion - Entry point
  *@x: is the given number
  *@y: is the power given x
  *Return: return the value of x
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	_pow_recursion(x, y - 1);
	return (x * (_pow_recursion(x, y - 1)));
}
