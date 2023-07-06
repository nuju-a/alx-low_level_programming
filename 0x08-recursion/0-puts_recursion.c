#include "main.h"

/**
  *_puts_recursion - Entry point
  *@s: the string to be printed
  *Return: return 0
  */
void _puts_recursion(char *s)
{
	int c = 0;

	if (s[c] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[c]);
	_puts_recursion(s + 1);
}
