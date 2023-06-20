#include "main.h"

/**
  *main - Entry point
  *Description: prints a-z
  *Return: return 0
  */
int main(void)
{
	int a = 97;
	int z = 123;
	int print_alphabet = a;

	while (a <= z)
{
	_putchar(print_alphabet);
	print_alphabet++;
}
_putchar('\n');
return (0);
}
