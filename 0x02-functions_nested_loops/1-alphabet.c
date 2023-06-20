#include "main.h"

/**
  *print_alphabet - Entry point
  *Description: prints a-z
  *Return: return 0
  */
void print_alphabet(void)
{
	int a = 97;

	while (a < 123)
{
	_putchar(a);
	a++;
}
_putchar('\n');
}
