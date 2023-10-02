#include "main.h"

/**
  *_puts - Entry point
  *@str: The character that test the code
  *Return: 0
  */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		str++;
	}
	_putchar('\n');
}
