#include "main.h"

/**
  *print_alphabet_x10 - Entry point
  *
  *Description: will print a-z 10times
  *Return: return 0
  */
void print_alphabet_x10(void)
{
	int b = 0;

	while (b < 11)
	{
		int a = 97;
		while (a < 123)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		b++;
	}
}

