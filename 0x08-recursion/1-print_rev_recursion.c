#include "main.h"

/**
  *_print_rev_recursion - funtion that prints string in reverse
  *@s: parameter that returns a character
  *
  *Return: 0
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		/*_putchar('\n');*/
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
