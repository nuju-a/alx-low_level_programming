#include "main.h"

/**
  *print_most_numbers - Entry point
  *
  *Return: 0
  */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a == 50)
		{
			continue;
			if (a == 52)
			{
				continue;
			}
		}
		else
		{
			_putchar(a);
		}
	}
	_putchar('\n');
	return (0);
}
