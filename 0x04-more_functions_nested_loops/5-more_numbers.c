#include "main.h"

/**
  *more_numbers - Entry point
  *
  *Return: 0
  */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a < 0xA; a++)
	{
		for (b = 0; b < 0xF; b++)
		{
			_putchar(b + '0');
		}
		_putchar('\n');
	}
}
