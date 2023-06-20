#include "main.h"
void print_alphabet(void);

/**
  *main - Entry point
  *Description: prints a-z
  *Return: return 0
  */
int main(void)
{
	int a = 97;
	int z = 123;
	int i = a;

	while (a <= z)
{
	_putchar(i);
	i++
}
_putchar('\n');
return (0);
}
