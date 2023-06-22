#include "main.h"


/**
  *mul - Entry point
  *Description - function multiplies two integers
  *@a: First argument for mul operation
  *@b: Second argument for mul operation
  *Return: return 0
  */
int mul(int a, int b)
{
	int result;

	for (a = 0; a <= 9; a++)
		for (b = 0; b <= 9; b++)
			result = a * b;
	_putchar(result + '0');
	return (0);
}
