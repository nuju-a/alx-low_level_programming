#include "main.h"

/**
  *_print_rev_recursion - Entry point
  *@s: The character string to reverse
  *Return: return 0.
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion('\0' + (s + 1));
	_putchar(*s);
}
