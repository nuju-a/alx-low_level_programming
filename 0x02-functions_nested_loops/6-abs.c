#include "main.h"
#include <stdlib.h>

/**
  *_abs - Entry point
  *@int: agrument
  *
  *Return: 0
  */
int _abs(int j)
{

	if (j < 0)
	{
		return (-j);
	}
	else
	{
		return (j);
	}
	_putchar('\n');
}
