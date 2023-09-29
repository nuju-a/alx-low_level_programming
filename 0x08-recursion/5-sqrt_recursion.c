#include "main.h"

/**
 *_sqrt - function that finds the squqre of a number
 *@x: the parameter number whose square we want to find
 *@y: the parameter root of our number
 *
 *Return: 0
 */
int _sqrt(int x, int y)
{
	/*where y = root of a number and x is the number */
	if (y * y == x)
		return (y);
	else if (y == x / 2)
		return (-1);
	else
		return (_sqrt(x, y + 1));
}

/**
 *_sqrt_recursion - function returns natural square of a given number
 *@n: parameter that is the given number
 *
 *Return: 0
 */
int _sqrt_recursion(int n)
{
	int y = 0;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_sqrt(n, y));
}
