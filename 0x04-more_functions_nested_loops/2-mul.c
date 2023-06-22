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

	for (a = 48; a <= 97; a++)
		for (b = 48; b <= 97; b++)
			result = a * b;
	_putchar(result + '0');
	return (0);
}
